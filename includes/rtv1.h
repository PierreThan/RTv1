/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:18:47 by vbrazhni          #+#    #+#             */
/*   Updated: 2018/08/06 16:18:49 by vbrazhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include <pthread.h>
# include <math.h>
# include "key_macos.h"
# include "structures.h"

# define WIN_WIDTH 1200
# define WIN_HEIGHT 900
# define PTHREADS 12

typedef struct	s_rtv1
{
	t_mlx		mlx;
}				t_rtv1;

int				key_press(int key, void *param);
int				mouse_press(int button, int x, int y, void *param);
void			ft_display_window(t_mlx *mlx, char *title,
									int img_width, int img_height);
void			point_to_img(t_fractal *fractal, int x, int y, int color);
void			setup_controls(t_fractal *fractal);

#endif
