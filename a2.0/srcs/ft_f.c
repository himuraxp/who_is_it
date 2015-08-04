/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <HimuraXp>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/04 18:08:20 by                   #+#    #+#             */
/*   Updated: 2015/08/04 19:16:02 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_header(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 5)
	{
		while (i < 80 && (j <= 1 || j >= 3))
		{
			if (j == 0 || j == 4)
			{
				ft_putchar('=');
				i++;
			}
			else if (j == 1 || j == 3)
			{
				ft_putchar('\n');
				j++;
				i++;
				break;
			}
		}
		i = 0;
		if (j == 2)
		{
			ft_putchar('|');
			while ((i <= 28 || i >= 51) && i < 80)
			{
				ft_putchar(' ');
				if (i == 28)
				{
					ft_putstr("|MARVEL VS DC COMICS|");
					i = 51;
				}
				i++;
			}
			ft_putchar('|');
			ft_putchar('\n');
		}
		j++;
	}
}
