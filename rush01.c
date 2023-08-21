/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmansour <fmansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:06:31 by fmansour          #+#    #+#             */
/*   Updated: 2023/08/20 20:01:34 by fmansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_drawer(int x, int y, int sx, int sy)
{
	while (sy <= y)
	{
		while (sx <= x)
		{
			if ((sy == 1 && sx == 1) || (sy == y && sx == x && y > 1 && x > 1))
				ft_putchar('/');
			else if ((sx == x && sy == 1) || (sy == y && sx == 1))
				ft_putchar('\\');
			else if ((sy == 1) || (sy == y) || (sx == 1) || (sx == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			sx++;
		}
		ft_putchar('\n');
		sx = 1;
		sy++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		write(1, "Values must be greater than 0", 30);
	else
	{
		ft_drawer(x, y, 1, 1);
	}
}
