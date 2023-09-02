/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:23:08 by ggulteki          #+#    #+#             */
/*   Updated: 2023/08/20 12:39:04 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!src && !dst)
		return (0);
	while (len > 0)
	{
		*(char *)((char *)dst + i) = *(char *)((char *)src + j);
		i++;
		j++;
		len--;
	}
	return (dst);
}
