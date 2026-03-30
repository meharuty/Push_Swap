/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 11:09:49 by meharuty          #+#    #+#             */
/*   Updated: 2026/03/22 12:18:34 by meharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_stack *stack)
{
    int tmp;

    if (stack == NULL || stack->next == NULL)
        return;
    tmp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = tmp;
}

void sa(t_stack **a)
{
    swap(*a);
	write(1, "sa\n", 3);
}

void sb(t_stack **b)
{
    swap(*b);
	write(1, "sb\n", 3);
}

void ss(t_stack **a, t_stack **b)
{
    swap(*a);
    swap(*b);
	write(1, "ss\n", 3);
}

static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

void pa(t_stack **b, t_stack **a)
{
    push(b, a);
    write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b)
{
    push(a, b);
    write(1, "pb\n", 3);
}

static void rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;

    if (!stack || !*stack || !(*stack)->next)
        return;
    tmp = *stack;
    last = *stack;
    *stack = (*stack)->next;
    while(last->next != NULL)
    {
        last = last->next;
    }
    tmp->next = NULL;
    last->next = tmp;
}

void ra(t_stack **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}

void rb(t_stack **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}

static void rev_rotate(t_stack **stack)
{
    t_stack *last;
    t_stack *last_2;

    if (!stack || !*stack || !(*stack)->next)
        return;
    last = *stack;
    while(last->next->next != NULL)
    {
        last = last->next;
    }
    last_2 = last;
    last = last->next;
    last_2->next = NULL;
    last->next = *stack;
    *stack = last;
}

void rra(t_stack **a)
{
    rev_rotate(a);
    write(1, "rra\n", 4);
}

void rrb(t_stack **b)
{
    rev_rotate(b);
    write(1, "rrb\n", 4);
}

void rrr(t_stack **a, t_stack **b)
{
    rev_rotate(a);
    rev_rotate(b);
    write(1, "rrr\n", 4);
}
