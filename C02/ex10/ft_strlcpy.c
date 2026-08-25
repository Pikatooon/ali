/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:07:08 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/18 10:03:34 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size == 0)
	{
		return (j);
	}
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*int main()
{
	char src[] = "hellow";
	char dest[3];
	unsigned int size = 2;
	unsigned int result;

	result = ft_strlcpy(dest, src, size);
	write(1, dest, 1);
	return (0);
}*/
