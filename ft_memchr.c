/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:31:25 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 12:22:59 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*p;
	unsigned int	i;

	p = (void *) s;
	i = 0;
	while (n > 0)
	{
		if (*p == (char)c)
			return ((void *)s + i);
		n--;
		p++;
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{

	char arr[] = "";
	char *res = (char *)ft_memchr(arr, '\0', 0);
	printf("%s", res);
	return (0);
}*/