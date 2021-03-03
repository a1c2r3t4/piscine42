/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:34:57 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/02 19:08:55 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 1)
		result = result * ft_recursive_factorial(nb - 1);
	else
		return (0);
	return (result);
}
