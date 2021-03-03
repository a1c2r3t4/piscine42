/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:55:03 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 16:01:36 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char str1[] = "Hello";
	char str2[] = "42";
	char str3[10];
	char str4[] = "World";

	ft_strcpy(str1, str4);
	ft_strcpy(str3, str2);
	printf("%s\n", str1);
	printf("%s", str3);
}
