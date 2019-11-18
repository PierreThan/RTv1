#include "../includes/rtv1.h"

t_vect3d	*create_vect3d(double x, double y, double z)
{
	t_vect3d	*vect;

	if (!(vect = ft_memalloc(sizeof(t_vect3d*))))
		return (NULL);
	vect->x = x;
	vect->y = y;
	vect->z = z;
	return (vect);
}

t_vect3d	*multiply_vect3d_scalar(t_vect3d a, double l)
{
	t_vect3d	*vect;

	if (!(vect = ft_memalloc(sizeof(t_vect3d*))))
		return (NULL);
	vect->x = l * a.x;
	vect->y = l * a.y;
	vect->z = l * a.x;
	return (vect);
}

double		multiply_2_vect3d(t_vect3d a, t_vect3d b)
{
	double		res;

	res = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
	return (res);
}

t_vect3d	*sum_2_vect3d(t_vect3d a, t_vect3d b)
{
	t_vect3d	*vect;

	if (!(vect = ft_memalloc(sizeof(t_vect3d*))))
		return (NULL);
	vect->x = a.x + b.x;
	vect->y = a.y + b.y;
	vect->z = a.x + b.z;
	return (vect);
}

void		normalize_vect3d(t_vect3d *vect)
{
	double	max;

	if (vect->x >= vect->y)
	{
		if (vect->x >= vect->z)
			max = vect->x;
		else
			max = vect->z;
	}
	else
	{
		if (vect->y >= vect->z)
			max = vect->y;
		else
			max = vect->z;
	}
	vect->x /= max;
	vect->y /= max;
	vect->z /= max;
}