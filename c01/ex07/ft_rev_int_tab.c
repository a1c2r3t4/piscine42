/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:53:00 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 13:00:46 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int a;
	int b;

	swap = 0;
	a = 0;
	b = size - 1;
	while (a < b)
	{
		swap = tab[a];
		tab[a] = tab[b];
		tab[b] = swap;
		a++;
		b--;
	}
}
