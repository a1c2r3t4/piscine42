/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:00:34 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/22 18:02:56 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = "allo comment ca va ici";
	char src[] = "bye bye 42";

	ft_strncpy(dest, src, 11);
	printf("%s", dest);
	return 0;
}
