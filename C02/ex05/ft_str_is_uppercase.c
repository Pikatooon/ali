/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 09:19:01 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/17 09:54:16 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	char str[] = "HELLO";
	int result;
	
	result = ft_str_is_uppercase(str);
	
	int i;
	i = 0;

	while (i < 1)
	{
		if (result == 1)
		{
			write(1 , "1\n", 1);
		}
		else
			write(1, "0\n", 1);
		i++;
	} 
}*/
