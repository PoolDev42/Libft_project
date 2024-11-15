/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:31:36 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/15 14:06:58 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*cpy;
	void			*res;
	size_t			total_size;

	total_size = nmemb * size;
	if (nmemb > 0 && total_size > SIZE_MAX)
		return (NULL);
	res = malloc(total_size);
	if (res == NULL)
		return (NULL);
	cpy = res;
	while (total_size > 0)
	{
		*cpy = 0;
		total_size--;
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