/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:32:31 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/23 17:03:32 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_strupcase(char *str);

int main()
{
	char a[] = "allo ALLO 1234 gourmant";
	
	ft_strupcase(a);
	printf("%s", a);
}
