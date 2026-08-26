/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:16:05 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/25 17:20:08 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] && argv[i][k] == argv[j][k])
			{
				k++;
			}
			if (argv[i][k] > argv[j][k])
				*temp = argv[i][k];
				argv[i][k] = argv[j][k];
				argv[j][k] = temp;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, &argv[i][k], 1);
		i++;
	}
}
