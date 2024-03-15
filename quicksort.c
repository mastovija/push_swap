#include "printf/ft_printf.h"
#include "push_swap.h"
#include <stdlib.h>

void print_stack_contents(t_stacks *stack) {
    if (!stack) return;

    ft_printf("Stack A: ");
    for (int i = 0; i < stack->size_a; i++) {
        ft_printf("%d ", stack->a[i]);
    }
    ft_printf("\n");

    ft_printf("Stack B: ");
    for (int i = 0; i < stack->size_b; i++) {
        ft_printf("%d ", stack->b[i]);
    }
    ft_printf("\n");
}

//Sorts up to three elements in Stack A using a combination of
//swapping and pushing between the two stacks.
//If there are exactly 3 elements only in Stack A, we call another function
//If there are 2 elements in Stack A, we swap them if they are not sorted
//If there are 3 elements between Stack A and Stack B we enter a loop
//until the 3 elements are inside Stack A and sorted.

void	sort_up_to_three_in_stack_a(t_stacks *stack, int len)
{
    if (len == 3 && stack->size_a == 3)
        sort_exactly_three_in_stack_a(stack);
    else if (len == 2)
    {
        if (stack->a[0] > stack->a[1])
            swap_a(stack);
    }
    else if (len == 3)
    {
        while (len != 3 || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
        {
            if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
                swap_a(stack);
            else if (len == 3 && !(stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1]))
                len = ft_push(stack, len, 0);
            else if (stack->a[0] > stack->a[1])
                swap_a(stack);
            else if (len <= 3)
            {
                push_a(stack);
                if (len < 3)
                    len++;
            }
        }
    }
}
//Sorts up to three elements in Stack B in descending order and then pushes them to Stack A.
//When pushed to stack A they are sorted in ascending order.
//If there is only 1 element in Stack B, it is simply pushed to Stack A.
//If there are 2 elements, they are swapped if out of order and then pushed to Stack A.
//If there are 3 elements, a loop ensures they are sorted and pushed to Stack A.
int	sort_up_to_three_in_stack_b(t_stacks *stack, int len)
{
	if (len == 1)
		push_a(stack);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			swap_b(stack);
		while (len--)
			push_a(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
				swap_a(stack);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				swap_b(stack);
		}
	}
	return (0);
}
//Calculates the median of the stack and assigns it to the pivot
//Using the median gives the best performance for quicksort
//To calculate the exact median we need to sort the stack first
//Normally we would use an approximation of the median but for this
//project is okay.
int	calculate_median(int *pivot, int *stack, int size)
{
	int	*temp_stack;
	int	i;

	temp_stack = (int *)malloc(size * sizeof(int));
	if (!temp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		temp_stack[i] = stack[i];
		i++;
	}
	temporary_sort(temp_stack, size);
	*pivot = temp_stack[size / 2];
	free(temp_stack);
	return (1);
}

// Sorts stack 'A' in ascending order using quicksort.
// 1. Initial checks: Checks if the stack is already sorted. If so, exit the function.
// 2. Handle small segments: If the length of the stack segment (len) is 3 or less,
//    call a specific function to sort these small segments.
// 3. Pivot selection: Calculate the median of the stack, which is used as the pivot
//    for partitioning.
// 4. Partitioning: Divide the stack into two partitions around the pivot. The partitioning
//    process works as follows:
//    a. Elements smaller than the pivot are pushed to stack 'B'.
//    b. Elements greater than or equal to the pivot are rotated within stack 'A'.
//    c. The partitioning continues until half of the elements (rounded up) have been processed.
// 5. Restoration: This step reverses the rotations made during the partitioning process. 
//    It is executed under two conditions:
//    a. If any rotations were performed (tracked by rotation_count).
//    b. If the size of Stack A after partitioning does not match the target size 
//       (original_len / 2 + original_len % 2). This ensures that the stack is 
//       restored to its proper state for subsequent sorting.
//    The restoration process is critical to maintain the relative order among the 
//    elements that were rotated within Stack A.
// 6. Recursive Sorting: Apply quicksort recursively to the divided partitions. Quicksort
//    is applied to the top segment of stack 'A' (which now contains the larger elements)
//    and to all elements in stack 'B' (which contains the smaller elements).

int	quicksort_stack_a(t_stacks *stack, int len, int rotation_count)
{
	int	pivot;
	int	original_len;

	if (check_sorted(stack->a, len, 0) == 1)
		return (1);
	original_len = len;
	if (len <= 3)
	{
		sort_up_to_three_in_stack_a(stack, len);
		//print_stack_contents(stack);
		return (1);
	}
	if (!calculate_median(&pivot, stack->a, len))
		return (0);
	while (len != original_len / 2 + original_len % 2)
	{
		if (stack->a[0] < pivot && (len--))
		{	
			push_b(stack);
			//print_stack_contents(stack);
		}
		else if (++rotation_count)
		{	
			rotate_a(stack);
			//print_stack_contents(stack);
		}
	}
	while (original_len / 2 + original_len % 2 != stack->size_a && rotation_count--)
	{
		reverse_rotate_a(stack);
		//print_stack_contents(stack);
	}
	return (quicksort_stack_a(stack, original_len / 2 + original_len % 2, 0)
		&& quicksort_stack_b(stack, original_len / 2, 0));
	return (1);
}
// Sorts stack 'B' in descending order using quicksort.
// 1. Initial checks: Checks if the stack is already sorted in reverse. If so, 
//    elements are pushed back to stack 'A' and the function exits.
// 2. Handle small segments: If the length of the stack segment (len) is 3 or less,
//    call a specific function to sort these small segments.
// 3. Pivot selection: Calculate the median of the stack, which is used as the pivot
//    for partitioning.
// 4. Partitioning: Divide the stack into two partitions around the pivot. The partitioning
//    process works as follows:
//    a. Elements greater than or equal to the pivot are pushed to stack 'A'.
//    b. Elements smaller than the pivot are rotated within stack 'B'.
//    c. The partitioning continues until half of the elements have been processed.
// 5. Restoration: This step reverses the rotations made during the partitioning process. 
//    It is executed under two conditions:
//    a. If any rotations were performed (tracked by rotation_count).
//    b. If the size of Stack B after partitioning does not match the target size 
//       (original_len / 2). This ensures that the stack is restored to its proper 
//       state for subsequent sorting.
//    The restoration process is critical to maintain the relative order among the 
//    elements that were rotated within Stack B.
// 6. Recursive Sorting: Apply quicksort recursively to the divided partitions. Quicksort
//    is applied to the top segment of stack 'A' (which now contains the smaller elements)
//    and to all elements in stack 'B' (which contains the larger elements).

int	quicksort_stack_b(t_stacks *stack, int len, int count_r)
{
	int	pivot;
	int	original_len;

	if (check_sorted(stack->b, len, 1) == 1)
		while (len--)
		{
			push_a(stack);
		}
	if (len <= 3)
	{
		sort_up_to_three_in_stack_b(stack, len);
		//print_stack_contents(stack);
		return (1);
	}
	original_len = len;
	if (!calculate_median(&pivot, stack->b, len))
		return (0);
	while (len != original_len / 2)
	{
		if (stack->b[0] >= pivot && len--)
		{
			push_a(stack);
			//print_stack_contents(stack);
		}
		else if (++count_r)
		{
			rotate_b(stack);
			//print_stack_contents(stack);
		}
	}
	while (original_len / 2 != stack->size_b && count_r--)
	{
		reverse_rotate_b(stack);
		//print_stack_contents(stack);
	}
	return (quicksort_stack_a(stack, original_len / 2 + original_len % 2, 0)
		&& quicksort_stack_b(stack, original_len / 2, 0));
}
