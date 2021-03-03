/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 10:50:47 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/03 16:24:29 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
