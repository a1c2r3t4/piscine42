/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:49:36 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/16 15:35:14 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(c)
{
	write(1, &c, 1);
}

void	n_number(int x)
{

}

void	p_number(int y)
{

}

void	ft_putnbr(int nb)
{
	
	if (nb < 0)
	{
		n_number(nb);
	}
	else 
	{
		p_number(nb);
	}
}

int main()
{
	ft_putnbr(-315);
	return 0;
}
