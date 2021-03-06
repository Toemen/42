/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:20:50 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/16 14:09:18 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i < 46341)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
