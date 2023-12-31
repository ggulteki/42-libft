/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:32:24 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/09 15:21:35 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || !len)
		return (0);
	while ((*(s1 + i) && *(s2 + i)) && i < len - 1)
	{
		if ((unsigned char)*(s1 + i) == (unsigned char)*(s2 + i))
			i++;
		else
			break ;
	}
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
