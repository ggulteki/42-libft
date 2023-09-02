/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:23:29 by ggulteki          #+#    #+#             */
/*   Updated: 2023/08/31 19:47:16 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest,	int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > 0)
	{
		*(char *)(dest + i) = c;
		len--;
		i++;
	}
	return (dest);
}
