/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 13:49:29 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 16:01:30 by bprovoos      ########   odam.nl         */
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

void	inputChecker(int argc, char **argv)
{
	char	*msg;

	msg = "";
	if (!isNumbers(argc, argv))
		msg = "Error\n";
	ft_printf("%s", msg);
	if (!ft_strncmp(msg, "Error\n", 6))
		exit(0);
}
