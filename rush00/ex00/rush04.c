/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloutie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:12:05 by acloutie          #+#    #+#             */
/*   Updated: 2021/02/14 12:02:39 by acloutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int h, int j, int longueur, int hauteur)
{
	if (longueur == 1 && hauteur == 1)
		ft_putchar('A');
	else if (h == longueur && hauteur == 1)
		ft_putchar('C');
	else if (longueur == 1 && hauteur == j)
		ft_putchar('C');
	else if (longueur == h && hauteur == j)
		ft_putchar('A');
	else if ((hauteur == 1) || (j == hauteur))
		ft_putchar('B');
	else if ((longueur == 1) || (h == longueur))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int hauteur;
	int longueur;
	int h;
	int j;

	h = x;
	j = y;
	hauteur = 1;
	while (hauteur <= y)
	{
		longueur = 1;
		while (longueur <= x)
		{
			ft_print(h, j, longueur, hauteur);
			longueur++;
		}
		hauteur++;
		ft_putchar('\n');
	}
}
