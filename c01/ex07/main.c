/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:00:53 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 13:14:07 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(&tab[5], size);
	printf("%s", &tab[5]);
	return 0;
}
