/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:14:22 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/14 17:28:50 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		j;

	j = 0;
	if (start >= ft_strlen(s) || len == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	else if (start + len > ft_strlen(s))
		res = malloc(ft_strlen(s) - start + 1);
	else
		res = malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (s[start + j] && len > 0)
	{
		res[j] = s[start + j];
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