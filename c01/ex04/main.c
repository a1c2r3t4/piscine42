/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:10:07 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 11:14:51 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 42;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
