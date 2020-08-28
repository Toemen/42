/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 10:17:48 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/05 11:06:46 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_uppercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 65 && str[0] <= 90))
			return (0);
		str++;
	}
	return (1);
}