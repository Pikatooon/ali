/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:51:06 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/13 17:09:33 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	p1;
	int	p2;

	p1 = 0;
	p2 = size - 1;
	while (p1 < p2)
	{
		ft_swap(&tab[p1], &tab[p2]);
		p1++;
		p2--;
	}
}
/*void ft_putnbr(int nb)
{
	char c;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
int main()
{
	
	int	tab[] = {1, 2 ,3 ,4 , 5};
	int i = 0;
	int	size = 5;
	ft_rev_int_tab(tab , size);

	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
	return 0;
}*/
