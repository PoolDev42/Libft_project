/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:23:32 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/12 15:33:54 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*e;
	const char	*s;

	d = dst;
	s = src;
	e = dst + size;
	while (*s && d < e)
		*d++ = *s++;
	if (d < e)
		*d = '\0';
	else if (size > 0)
		d[-1] = '\0';
	while (*s != '\0')
		s++;
	return (s - src);
}

/*#include <stdio.h>
int main(void)
{
	char src[] = "kdjfkdsfroekjter";
	char dest[] = "ihfdihgfdhgifdhg";
	unsigned long a = ft_strlcpy(dest, src, 5);
	printf("%s : %lu", dest, a);
	return (0);
}*/