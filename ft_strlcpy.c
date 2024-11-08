/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:23:32 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/08 16:26:15 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	i;

	i = 0;
	while (src[i] && dst[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
int main(void)
{
	char src[] = "kdjfkdsfroekjter";
	char dest[] = "ihfdihgfdhgifdhg";
	unsigned long a = ft_strlcpy(dest, src, 5);
	printf("%s : %lu", dest, a);
	return (0);
}