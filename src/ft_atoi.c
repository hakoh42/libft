/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakoh <hakoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:28:00 by hakoh             #+#    #+#             */
/*   Updated: 2020/09/16 10:28:59 by hakoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	long			i;
	long			rslt;

	i = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	rslt = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		rslt *= 10;
		rslt += str[i] - 48;
		i++;
	}
	if (rslt < 0)
		rslt = (sign < 0 ? 0 : -1);
	return (sign * rslt);
}
