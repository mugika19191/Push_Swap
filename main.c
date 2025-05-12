/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <imugica-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:10:48 by imugica-          #+#    #+#             */
/*   Updated: 2025/03/07 09:45:28 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	write_error(char **numbers, int i)
{
	write(2, "Error\n", 6);
	while (numbers[i])
		free(numbers[i++]);
	free(numbers);
	return (1);
}

int	is_unique(t_stack *a)
{
	int		i;
	t_stack	*b;

	while (a)
	{
		i = a->content;
		b = a->next;
		while (b)
		{
			if (i == b->content)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			b = b->next;
		}
		a = a->next;
	}
	return (1);
}

int	load_numbers(t_stack **a, char **args)
{
	int		i;
	int		j;
	char	**numbers;
	int		corr;

	j = 1;
	while (args[j])
	{
		corr = 1;
		i = 0;
		numbers = ft_split(args[j++], ' ');
		while (numbers[i])
		{
			st_atoi(numbers[i], &corr);
			if (corr)
				ft_stadd_back(a, ft_stnew(ft_atoi(numbers[i++])));
			else
				return (write_error(numbers, i));
			free(numbers[i - 1]);
		}
		free(numbers);
	}
	return (0);
}

void	ft_stfree(t_stack *stack)
{
	t_stack	*temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

int	main(int count, char **args)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	i = 0;
	if (count < 2)
		return (1);
	if (load_numbers(&a, args) == 0)
	{
		if (!is_unique(a))
		{
			ft_stfree(a);
			return (1);
		}
		set_indices(&a);
		solve_two(&a);
		if (ft_stsize(a) < 50)
			solve_insert(&a, &b);
		resolve(&a, &b);
	}
	ft_stfree(a);
	return (0);
}
