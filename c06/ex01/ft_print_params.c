/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:56:11 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/26 16:26:02 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i != argc)
	{
		put_str(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
