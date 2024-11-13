/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:14:22 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 15:39:17 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int i, size_t len)
{
	char	*res;
	int		j;

	j = 0;
	if (i >= ft_strlen(s) || len == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s))
		res = malloc(ft_strlen(s) * sizeof(char) + 1);
	else
		res = malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] && len > 0)
	{
		res[j] = s[i];
		i++;
		j++;
		len--;
	}
	res[j] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = ft_substr("hola", 4294967295, 0);
	printf("%s", str);
	free(str);
	return (0);
}*/