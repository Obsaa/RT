/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eLopez <elopez@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 17:35:44 by eLopez            #+#    #+#             */
/*   Updated: 2018/01/16 17:02:56 by eLopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void	rt_error(int code)
{
	static char	*msg[] = {
		"invalid amount of arguements",
		"could not open file",
		"invalid file"
	};

	ft_printf("%{RD}RT: %s%{NC}\nusage: %{rd}./RTv1%{nc} \
%{TQ}scenes/%{nc}[file]\n", msg[code]);
	exit(0);
}
