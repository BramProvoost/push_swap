/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 13:49:29 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/22 13:21:14 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "input_check.h"
#include <limits.h>

int	isNumbers(int argc, char **argv)
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

int	hasDuplicates(int argc, char **argv)
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

void	inputChecker(int argc, char **argv)
{
	int	isError;

	isError = !isNumbers(argc, argv);
	isError |= hasDuplicates(argc, argv);
	if (isError)
	{
		ft_printf("Error\n");
		exit(0);
	}
}
