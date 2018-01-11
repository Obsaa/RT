/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalha <oabdalha@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:32:37 by elopez            #+#    #+#             */
/*   Updated: 2018/01/10 23:36:20 by eLopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int		expose_hook(t_rt **rt)
{
	draw(*rt);
	return (0);
}

int		key_hook(int key, t_rt **rt)
{
	t_obj *tmp;

	if (key == KEYESC)
	{
		while ((*rt)->obj != NULL)
		{
			tmp = (*rt)->obj->next;
			ft_memdel((void**)&(*rt)->obj);
			(*rt)->obj = tmp;
		}
		mlx_destroy_image((*rt)->mlx, (*rt)->img);
		mlx_destroy_window((*rt)->mlx, (*rt)->win);
		ft_memdel((void**)&(*rt)->light);
		ft_memdel((void**)rt);
		exit(0);
	}
	else if (key == KEYPLUS || key == KEYMIN)
	{
		(*rt)->bright += (key == KEYPLUS) ? 0.05 : -0.05;
		g_shine = colorscalar((t_rgb){150, 150, 150}, (*rt)->bright);
		scene(*rt);
		draw(*rt);
	}
	return (0);
}

int		close_hook(t_rt **rt)
{
	key_hook(KEYESC, rt);
	return (0);
}
