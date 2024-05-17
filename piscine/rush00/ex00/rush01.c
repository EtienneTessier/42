/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:41:42 by juperez           #+#    #+#             */
/*   Updated: 2024/02/10 17:24:47 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP 0
#define MID 1
#define BOT 2
#define LEFT 0
#define CENTER 1
#define RIGHT 2

void	ft_putchar(char c);

static const char	g_square[3][3] = {"/*\\", "* *", "\\*/"};

void	ft_check_x(int x, int pos_y)
{
	int	index;
	int	pos_x;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
			pos_x = LEFT;
		else if (index == x)
			pos_x = RIGHT;
		else
			pos_x = CENTER;
		ft_putchar(g_square[pos_y][pos_x]);
		index++;
	}
}

void	ft_check_y(int x, int y)
{
	int	index;

	index = 1;
	while (index <= y)
	{
		if (index == 1)
			ft_check_x(x, TOP);
		else if (index == y)
			ft_check_x(x, BOT);
		else
			ft_check_x(x, MID);
		ft_putchar('\n');
		index++;
	}
}

void	rush(int x, int y)
{
	ft_check_y(x, y);
}
