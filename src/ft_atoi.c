/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:24:14 by ggulteki          #+#    #+#             */
/*   Updated: 2023/08/31 21:05:05 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	rslt;

	sign = 1;
	rslt = 0;
	i = 0;
	while (*(nptr + i) == '\t' || *(nptr + i) == '\n' || *(nptr + i) == '\v' || \
		*(nptr + i) == '\f' || *(nptr + i) == '\r' || *(nptr + i) == ' ')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign = -1;
		i++;
	}
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
		rslt = (rslt * 10) + (*(nptr + i++) - '0');
	return (rslt * sign);
}
