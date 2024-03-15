
#include "printf/ft_printf.h"
#include "push_swap.h"
//This function sorts a copy of the stack with bubblesort to find the median.
void	temporary_sort(int *temporary_stack, int size)
{
	int	i;
	int	j;
	int	temporary;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (temporary_stack[i] > temporary_stack[j])
			{
				temporary = temporary_stack[i];
				temporary_stack[i] = temporary_stack[j];
				temporary_stack[j] = temporary;
			}
			j++;
		}
		i++;
	}
}
// sorts a stack of three elements in ascending order in Stack A.
void	sort_exactly_three_in_stack_a(t_stacks *three)
{
	int	*a;

	a = three->a;
	if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		swap_a(three);
	if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		swap_a(three);
		reverse_rotate_a(three);
	}
	if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		rotate_a(three);
	if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		swap_a(three);
		rotate_a(three);
	}
	if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		reverse_rotate_a(three);
}

//'sort': checks if stack 'a' is sorted, if not we sort it.
// It uses 3 different ways of sorting depending if the stack has
// 2, 3 or more than 3 elements.

int	sort(t_stacks *stack, int size)
{
	if (check_sorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			swap_a(stack);
		else if (size == 3)
			sort_exactly_three_in_stack_a(stack);
		else
			quicksort_stack_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stacks *stack, int len, int push)
{
	if (push == 0)
		push_b(stack);
	else
		push_a(stack);
	len--;
	return (len);
}