/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngarti <alngarti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:31:36 by alngarti          #+#    #+#             */
/*   Updated: 2026/08/14 11:59:06 by alngarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if( argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
             {
				 argv[1][i] = argv[1][i] + 32;
				 write(1, &argv[1][i], 1);
			 }
			else
				write(1, &argv[1][i], 1);
			i++;	
		}
	}	
}
