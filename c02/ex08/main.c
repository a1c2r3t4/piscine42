/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:58:59 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/23 15:00:41 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlowcase(char *str);

int main()
{
	char a[] = "DFHDSFHHSA dfhgjhkgl ZDDFRG 1234455";

	ft_strlowcase(a);
	printf("%s", a);
}
