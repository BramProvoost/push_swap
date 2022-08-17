/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 13:49:29 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/08/17 11:36:18 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	is_numbers(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		argc--;
		while (argv[argc][i])
		{
			if (!(ft_isdigit(argv[argc][i]) || argv[argc][i] == '-'))
				return (0);
			i++;
		}
		if (ft_atoi(argv[argc]) < INT_MIN || ft_atoi(argv[argc]) > INT_MAX)
			return (0);
	}
	return (1);
}

int	has_duplicates(int argc, char **argv)
{
	int	i;
	int	temp;

	while (argc > 1)
	{
		argc--;
		temp = ft_atoi(argv[argc]);
		i = 1;
		while (i < argc)
		{
			if (ft_atoi(argv[i]) == temp)
				return (1);
			i++;
		}
	}
	return (0);
}

void	input_checker(int argc, char **argv)
{
	int	is_error;

	is_error = !is_numbers(argc, argv);
	is_error |= has_duplicates(argc, argv);
	if (is_error)
	{
		ft_printf("Error\n");
		exit(0);
	}
}
