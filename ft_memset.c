/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:34:43 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/06 15:10:13 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

/*#include <string.h>
#include <stdio.h>
int	main() {

	int array[] = {12, 45, 67, 9};
	int length;
	size_t size = sizeof(int) * 4;

	for(length = 0; length < 5; length++) {
		printf("%d ", array[ length ]);
	}
	printf( "\n" );

	memset(array, 0, size);

	for(length = 0; length < 5; length++) {
		printf( "%d ", array[length] );
	}

	return (0);
}*/