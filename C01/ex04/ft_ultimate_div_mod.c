/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:05:06 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/13 14:50:37 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putnbr(int nbr)
{
	char c;
	if(nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	c = (nbr % 10) + '0';
	write(1 , &c, 1);
}*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
	int a;
	int b;

	a = 5;
	b = 10;
	ft_ultimate_div_mod(&a , &b);
	ft_putnbr(a);
	ft_putnbr(b);
}*/
