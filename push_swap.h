#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stacks;

void	push_swap(char **argv);
int		ps_strlen(char **argv);
void	exit_on_error(int *stack);
int		ps_atoi(char *str, int *stack);
void	check_doubles(int *stack, int size);
//Instructions
void	swap_a(t_stacks *stack);
void	swap_b(t_stacks *stack);
void	swap_s(t_stacks *stack);
void	rotate_a(t_stacks *stack);
void	rotate_b(t_stacks *stack);
void	rotate_r(t_stacks *stack);
void	reverse_rotate_a(t_stacks *stack);
void	reverse_rotate_b(t_stacks *stack);
void	reverse_rotate_r(t_stacks *stack);
void	push_b(t_stacks *stack);
void	push_a(t_stacks *stack);
//Sort
int		sort(t_stacks *stack, int size);
int		check_sorted(int *stack, int size, int order);
void	sort_exactly_three_in_stack_a(t_stacks *three);
void	temporary_sort(int *temporary_stack, int size);
//Quicksort
int		quicksort_stack_a(t_stacks *stack, int len, int count_r);
int		quicksort_stack_b(t_stacks *stack, int len, int count_r);
void	sort_up_to_three_in_stack_a(t_stacks *stack, int len);
int		sort_up_to_three_in_stack_b(t_stacks *stack, int len);
int		ft_push(t_stacks *stack, int len, int pb);
int		calculate_median(int *pivot, int *stack, int size);
#endif