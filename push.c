
#include "push_swap.h"
#include "../printf/ft_printf.h"

//moves the top element of stack A to the top of stack B
//increments stack B by one
//shift all elements in stack B down by one to make room for the new element
//move the top element of stack A to the top of stack B
//decrements stack A by one
//shift all elements in stack A down by one to fill the gap left by the moved element
void	push_b(t_stacks *stack)
{
	int	i;

	if (stack->size_a > 0)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		ft_printf("pb\n");
	}
	else
		return ;
}
//moves the top element of stack B to the top of stack A
void	push_a(t_stacks *stack)
{
	int	i;

	if (stack->size_b > 0)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		stack->size_b--;
		while (++i < stack->size_b)
			stack->b[i] = stack->b[i + 1];
		ft_printf("pa\n");
	}
	else
		return ;
}