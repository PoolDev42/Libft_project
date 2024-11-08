/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:56:54 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/08 11:29:20 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src < dest && src + n >= dest)
	{
		d = dest + n - 1;
		s = (void *) src + n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
	{
		d = dest;
		s = (void *) src;
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main() 
{

	int dest[] = {12, 45, 67, 9};
	int src[] = {1, 2, 9, 6, 9};
	int length;
	size_t size = sizeof(int) * 4;

	for (length = 0; length < 4; length++) {
		printf("%d ", dest[length]);
	}
	printf("\n");

	ft_memmove(dest, src, size);

	for (length = 0; length < 4; length++) {
		printf("%d ", dest[length]);
	}

	return (0);
}*/