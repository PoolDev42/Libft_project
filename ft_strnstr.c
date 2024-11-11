/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:35:19 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/11 02:28:32 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s", ft_strnstr((const char*)av[1], 
	(const char*)av[2], atoi(av[3])));
	return (0);
}*/