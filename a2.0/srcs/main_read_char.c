/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_read_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarbi <ylarbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 14:27:59 by ylarbi            #+#    #+#             */
/*   Updated: 2015/08/15 17:24:21 by ylarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	read_char(char *str);

int		main(void)
{
	char *str;

	printf("Fonction read_char !\n");
	printf("Taper du texte : ");
	read_char(str);
	return (0);
}
