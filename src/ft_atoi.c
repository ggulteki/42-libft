/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:24:14 by ggulteki          #+#    #+#             */
/*   Updated: 2023/09/24 22:30:21 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	range_checker(int sign)
{
	if (sign == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	rslt;

	sign = 1;
	rslt = 0;
	i = 0;
	while (*(nptr + i) == '\t' || *(nptr + i) == '\n' || *(nptr + i) == '\v' \
		|| *(nptr + i) == '\f' || *(nptr + i) == '\r' || *(nptr + i) == ' ')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign = -1;
		i++;
	}
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		rslt = (rslt * 10) + (*(nptr + i) - '0');
		if (rslt > INT_MAX || rslt < INT_MIN)
			return (range_checker(sign));
		i++;
	}
	return ((int)(rslt * sign));
}
