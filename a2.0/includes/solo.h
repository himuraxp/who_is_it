/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 09:48:44 by                   #+#    #+#             */
/*   Updated: 2015/08/14 14:30:27 by ylarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLO_H
# define SOLO_H

typedef		s_perso		t_perso;
{
	char	name_hero[6][15] = {
			{"BATMAN"},
			{"GREEN LANTERNE"},
			{"IRON MAN"},
			{"WONDER WOMAN"},
			{"HARLEY QUINN"},
			{"JOKER"}};
	char	*hero_enter;
	char	*hero_mystere;
	long	taille_nom;
	int heros[6][6] = {
			{1, 0, 1, 0, 1, 0},
			{1, 0, 0, 1, 1, 0},
			{1, 1, 1, 0, 1, 0},
			{0, 0, 1, 1, 1, 0},
			{0, 0, 1, 0, 0, 0},
			{1, 0, 1, 0, 0, 0}};
}

#endif
