/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:58:11 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/02 19:06:46 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
