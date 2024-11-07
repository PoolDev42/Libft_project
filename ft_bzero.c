/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:18:49 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/07 15:07:36 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

/*#include <stdio.h>
int	main() {

	char array[] = "salut";
	int length;

	for(length = 0; length < 5; length++) {
		printf("%c ", array[ length ]);
	}
	printf( "\n" );

	ft_bzero(array, 4);

	for(length = 0; length < 5; length++) {
		printf( "%c ", array[length] );
	}

	return (0);
}*/