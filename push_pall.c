#include "monty.h"

void push(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if(new_node == null)
	{
		fprintf(stderr, "Error: Could not allocate memory\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		*stack->prev = new_node;
	}

	*stack = new_node
}

void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		current = current->next;
	}
}
