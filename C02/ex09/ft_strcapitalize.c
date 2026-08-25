/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:48:48 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/17 15:43:44 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	alphaisnumeric(char str)
{
	if ((str >= '0' && str <= '9') 
		|| (str >= 'a' && str <= 'z') 
		|| (str >= 'A' && str <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 0 || alphaisnumeric(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*int main()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char result = *ft_strcapitalize(str);

	write(1, str, 52);
}*/
