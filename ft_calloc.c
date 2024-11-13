/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:31:36 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 11:43:35 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	*cpy;
	void			*res;

	res = malloc(nmemb * size);
	if (res == 0)
		return (0);
	cpy = res;
	while (nmemb > 0)
	{
		*cpy = 0;
		nmemb--;
		cpy++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	*res = ft_calloc(50, sizeof(int));
	for (int i = 0; i < 50; i++)
		printf("%d\n", res[i]);
	free(res);
}*/