/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:44:50 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/02 15:01:20 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char a[220] = "Hello my ";
	char b[] = "world. ddghdsighjghdfhsojghgshfsdighs";

	printf("%s", ft_strncat(a, b, 10));
}
