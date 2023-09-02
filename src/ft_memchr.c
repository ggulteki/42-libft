/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:37 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/09 16:59:17 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)((char *)b + i) == (unsigned char)c)
			return ((void *)((char *)b + i));
		i++;
	}
	return (NULL);
}
