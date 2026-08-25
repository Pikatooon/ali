/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:36:26 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/22 11:55:09 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*void putnbr(int n)
{
	if (n < 0)
	{	
		write(1, "-", 1);
		n = -n;
	}
	if (n > 10)
	{
		putnbr(n / 10);
	}
	char c;
	c = (n % 10) + '0';
	write(1, &c ,1);
}
int main()
{
	char str[] = "alibpp";
	char str1[] = "alobxx";
	unsigned int n = 4;
	char res = ft_strncmp(str , str1, n);

	putnbr(res);
}*/
