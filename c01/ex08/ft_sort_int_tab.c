/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 19:52:04 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/14 10:19:02 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;

	while (i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				ft_swap(&tab[i],&tab[j]);
			}
			j++;
		}	
		i++;
	}
}
/*void	ft_putnbr(int nb)
{
	char	c;
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
int main()
{
	int size;
	int tab[] = {1 , 5 , 8 , 3 , 2};
	size = 5;

	ft_sort_int_tab(tab , size);

	int i;
	i = 0;

	while( i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
}*/
