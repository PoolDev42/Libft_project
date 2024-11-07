/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:28:49 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/07 16:49:18 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = (void *) src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main() 
{

	int dest[] = {12, 45, 67, 9};
	int src[] = {0, 1, 2, 5, 6, 90};
	int length;
	size_t size = sizeof(int) * 4;

	for (length = 0; length < 4; length++) {
		printf("%d ", dest[length]);
	}
	printf("\n");

	ft_memcpy(dest, src, size);

	for (length = 0; length < 4; length++) {
		printf("%d ", dest[length]);
	}

	return (0);
}*/