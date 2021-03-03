/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:06:49 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 11:09:41 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;

	ft_div_mod(42, 8, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}
