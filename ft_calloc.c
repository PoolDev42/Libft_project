/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:31:36 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 23:31:47 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*cpy;
	void			*res;
	size_t			total_size;

	if (nmemb > 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = nmemb * size;
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