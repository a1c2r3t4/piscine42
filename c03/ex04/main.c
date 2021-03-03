/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:36:12 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/25 13:45:19 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char s1[] = "allo comment ca va";
	char s2[] = "ca";


	printf("%s", ft_strstr(s1, s2));
}
