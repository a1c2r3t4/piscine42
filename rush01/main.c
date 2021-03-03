/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:01:18 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/20 16:26:34 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	main1(int col1up, int col2up, int col3up, int col4up);

//void	main2(int col1down, int col2down, int col3down, int col4down);

//void	main3(int row1left, int row2left, int row3left, int row4left);

//void 	main4(int row1right, int row2right, int row3right, int row4right);

//if (1 put 4)

//if (4 put 1,2,3,4)

//if (2 view 1,4,?,? ou 2,4,?,? ou 3,4,?,? ou 2,(1),4,? ou 3,?,?,4 ou 3,?,4,? )

//if (3 view 1,2,4,? ou 2,(1),3,4 ou 2,3,4,? ou 2,3,?,4 ou 1,3,4,? ou 1,3,(2),4 )

//if (1 case empty put 1 or 2 or 3) 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void test()
{
	ft_putchar('1');
	ft_putchar(' ');
	ft_putchar('2');
	ft_putchar(' ');
	ft_putchar('3');
	ft_putchar('\n');
	ft_putchar('3');
	ft_putchar(' ');
	ft_putchar('2');
	ft_putchar(' ');
	ft_putchar('1');
}

int main()
{
	test();
	return 0;
}


