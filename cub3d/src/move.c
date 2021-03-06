/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:54:16 by ygeslin           #+#    #+#             */
/*   Updated: 2020/03/12 18:17:07 by ygeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	ft_move_forward(t_struct *s, double sign)
{
	int		x;
	int		y;

	x = (int)(s->p.pos.x + sign * s->p.dir.x * SPEED);
	y = (int)(s->p.pos.y + sign * s->p.dir.y * SPEED);
	if (s->map.tab[(int)(s->p.pos.y)][(int)(x)] == '0')
		s->p.pos.x += sign * s->p.dir.x * SPEED;
	if (s->map.tab[(int)(y)][(int)s->p.pos.x] == '0')
		s->p.pos.y += sign * s->p.dir.y * SPEED;
}

void	ft_move_side(t_struct *s, double sign)
{
	if (s->map.tab[(int)(s->p.pos.y)]
			[(int)(s->p.pos.x + sign * -s->p.dir.y * SPEED)] == '0')
		s->p.pos.x += sign * -s->p.dir.y * SPEED;
	if (s->map.tab[(int)(s->p.pos.y + sign * s->p.dir.x * SPEED)]
			[(int)s->p.pos.x] == '0')
		s->p.pos.y += sign * s->p.dir.x * SPEED;
}

void	ft_rotate(t_struct *s, double sign)
{
	double	old_dir_x;
	double	old_plane_x;
	double	rot;

	rot = ANGLE * sign;
	old_dir_x = s->p.dir.x;
	old_plane_x = s->p.plane.x;
	s->p.dir.x = s->p.dir.x * cos(rot) - s->p.dir.y * sin(rot);
	s->p.dir.y = old_dir_x * sin(rot) + s->p.dir.y * cos(rot);
	s->p.plane.x = s->p.plane.x * cos(rot) - s->p.plane.y * sin(rot);
	s->p.plane.y = old_plane_x * sin(rot) + s->p.plane.y * cos(rot);
}
