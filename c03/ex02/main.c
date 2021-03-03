/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 08:51:23 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/25 10:30:59 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char a[220] = "Hello my ";
	char b[] = "world. ddghdsighjghdfhsojghgshfsdighs";

	printf("%s", ft_strcat(a, b));	
}
