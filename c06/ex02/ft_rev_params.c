/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:59:06 by acloutie          #+#    #+#             */
/*   Updated: 2021/03/02 18:45:20 by acloutie         ###   ########.fr       */
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

	i = argc - 1;
	while (i != 0)
	{
		put_str(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
