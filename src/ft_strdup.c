/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:53 by ggulteki          #+#    #+#             */
/*   Updated: 2023/09/01 19:27:09 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		str_len;
	char		*ptr;

	str_len = ft_strlen(str);
	ptr = (char *)ft_calloc(sizeof(char), (str_len + 1));
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, str, (str_len + 1)));
}
