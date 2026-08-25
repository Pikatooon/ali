/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:53:34 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/13 13:31:22 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putnbr(int nb)
{
	char c;
	if(nb >= 10)
	{
		ft_putnbr(nb / nb);
	}
	c = (nb %10) + '0';
	write(1 ,&c, 1);
}*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main()
{
	int a;
	int b;

	a = 5;
	b = 10;
	ft_swap(&a,&b);
	ft_putnbr(a);
	write(1 , "\n", 1);
	ft_putnbr(b);
}*/
