/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:58:40 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/17 14:29:28 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_print(int c, int d)
{
	ft_putchar(c / 10 + 48);
	ft_putchar(c % 10 + 48);
	ft_putchar(' ');
	ft_putchar(d / 10 + 48);
	ft_putchar(d % 10 + 48);
	if (c < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
