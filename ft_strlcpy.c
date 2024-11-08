/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:19:32 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/08 13:46:54 by lcalero          ###   ########.fr       */
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
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[] = "Salut les amis";
	char dst[] = "Pourquoi faites vous cela";
	size_t a = strlcpy(dst, src, 5);
	printf("ft function : %s\n%lu", dst, a);
}*/