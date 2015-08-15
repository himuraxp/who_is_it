/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarbi <ylarbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 10:20:10 by ylarbi            #+#    #+#             */
/*   Updated: 2015/08/15 19:17:58 by ylarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define LEN		42

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

char	*ft_gets(void)
{
	char	*str;
	int		i;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		read(0, &str[i], 1);
			ft_putchar(str[i]);
		if (str[i] == '\n')
		{
			break ;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char	*str;

	ft_putstr("Entez votre character : \0");
	str = ft_gets();
	ft_putstr("\nsaisie = ");
	ft_putstr(str);
	return (0);
}
