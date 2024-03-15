
#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"
#include <stdlib.h>

void initialize_stacks(t_stacks *stack, int size) 
{
    stack->a = malloc(size * sizeof(int));
    if (!stack->a)
        return;

    stack->size_a = size;
    stack->b = malloc(size * sizeof(int));
    if (!stack->b) {
        free(stack->a);
        return;
    }

    stack->size_b = 0;
}

void push_swap(char **argv) {
    t_stacks stack;
    int size;
    int i = 0;

    size = ps_strlen(argv);
    initialize_stacks(&stack, size);

    if (!stack.a || !stack.b) {
        ft_printf("Error: Memory allocation failed\n");
        return;
    }

    while (argv[i]) {
        stack.a[i] = ps_atoi(argv[i], stack.a);
        i++;
    }

    check_doubles(stack.a, size);
    sort(&stack, size);

    free(stack.a);
    free(stack.b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		push_swap(argv);
		return (0);
	}
    return (0);
}
// int main()
// {
//     // Define the testing array here
//     char *new_argv[] = {"7", "1", "4", "8", "2", "0", NULL};
//     //int new_argc = sizeof(new_argv) / sizeof(new_argv[0]) - 1; // Calculate the number of elements

//     // Call push_swap with the test array
//     push_swap(new_argv);

//     return 0;
// }