/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strucures.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:29:49 by pthan             #+#    #+#             */
/*   Updated: 2019/11/15 13:29:52 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct	s_img
{
	void		*img_ptr;
	int			*data;
	int			size_l;
	int			bpp;
	int			endian;
}				t_img;

typedef struct	s_mlx
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_img		img;
}				t_mlx;

typedef struct	s_vectord3_1
{
	double		x;
	double		y;
	double		z;
}				t_vectd3_1;

typedef struct	s_vectori3_1
{
	int			x;
	int			y;
	int			z;
}				t_vecti3_1;

typedef struct	s_plane
{
	t_vecti3_1	color;
	t_vectd3_1	origin;
	t_vectd3_1	orientation;
}				t_plane;

typedef struct	s_shpere
{
	double		radius;
	t_vecti3_1	color;
	t_vectd3_1	center;

}				t_shpere;

typedef struct	s_cylinder
{
	double		length;
	double		radius;
	t_vecti3_1	color;
	t_vectd3_1	center;
	t_vectd3_1	orientation;
}				t_cylinder;

typedef struct	s_cone
{
	double		length;
	double		radius;
	t_vecti3_1	color;
	t_vectd3_1	center;
	t_vectd3_1	orientation;
}				t_cone;

typedef struct	s_square
{
	double		length;
	t_vecti3_1	color;
	t_vectd3_1	origin;
	t_vectd3_1	orientation;
}				t_square;

typedef struct	s_triangle
{
	t_vecti3_1	color;
	t_vectd3_1	a;
	t_vectd3_1	b;
	t_vectd3_1	c;
}				t_triangle;

#endif
