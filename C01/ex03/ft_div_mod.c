/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:02:03 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/13 14:03:25 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*void	ft_putnbr(int nb)
{
	char c;
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 10;

	ft_div_mod(a , b , &div , &mod);
	ft_putnbr(div);
	write(1 ,"\n", 1);
	ft_putnbr(mod);
}*/
