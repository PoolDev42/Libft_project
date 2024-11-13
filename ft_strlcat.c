/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 01:24:40 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 14:07:46 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	if (size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dst[dest_len + i] = src[i];
			i++;
		}
		dst[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "Salut";
	char src[] = "les amis";
	unsigned long a = strlcat(dest, src, 6);
	printf("%s\n", dest);
	printf("%lu", a);
	return (0);
}*/