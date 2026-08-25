/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:07:49 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/24 18:24:30 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	char c;
	c = (nb % 10) + '0';
	write(1, &c, 1);
}*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb < i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	int a;
	int res;
	a = 5;
	res = ft_is_prime(5);
	ft_putnbr(res);

}*/
