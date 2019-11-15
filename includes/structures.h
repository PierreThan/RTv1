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

typedef struct	s_vector3d
{
	double		x;
	double		y;
	double		z;
}				t_vect3d;

typedef struct	s_vector3
{
	int			x;
	int			y;
	int			z;
}				t_vect3i;

typedef struct	s_plane
{
	t_vect3i	color;
	t_vect3d	origin;
	t_vect3d	dir;
}				t_plane;

typedef struct	s_shpere
{
	double		radius;
	t_vect3i	color;
	t_vect3d	center;

}				t_shpere;

typedef struct	s_cylinder
{
	double		length;
	double		radius;
	t_vect3i	color;
	t_vect3d	center;
	t_vect3d	dir;
}				t_cylinder;

typedef struct	s_cone
{
	double		length;
	double		radius;
	t_vect3i	color;
	t_vect3d	center;
	t_vect3d	dir;
}				t_cone;

typedef struct	s_square
{
	double		length;
	t_vect3i	color;
	t_vect3d	origin;
	t_vect3d	dir;
}				t_square;

typedef struct	s_triangle
{
	t_vect3i	color;
	t_vect3d	a;
	t_vect3d	b;
	t_vect3d	c;
}				t_triangle;

typedef union	u_object
{
	t_plane		plane;
	t_shpere	sphere;
	t_cylinder	cylinder;
	t_cone		cone;
	t_square	square;
	t_triangle	triangle;
}				t_obj;

typedef struct	s_object
{
	int			type;
	t_obj		obj;
}				t_object;

#endif
