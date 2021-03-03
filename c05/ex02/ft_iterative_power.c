/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:47:06 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/03 16:15:00 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	i = power;
	result = 1;
	if (i > 0)
	{
		while (i >= 1)
		{
			result = result * nb;
			i--;
		}
		return (result);
	}
	else if (i == 0)
		return (1);
	else
		return (0);
}
