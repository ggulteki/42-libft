/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:16 by ggulteki          #+#    #+#             */
/*   Updated: 2023/08/31 19:13:25 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t	i;

	if (len == 0)
		return (0);
	i = 0;
	while (len > 0 && i < len - 1)
	{
		if (*(unsigned char *)((unsigned char *)b1 + i) \
			== *(unsigned char *)((unsigned char *)b2 + i))
			i++;
		else
			break ;
	}
	return (*(unsigned char *)((unsigned char *)b1 + i) \
		- *(unsigned char *)((unsigned char *)b2 + i));
}
