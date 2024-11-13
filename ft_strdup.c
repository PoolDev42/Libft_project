/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:11:13 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 11:37:25 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	res = malloc(ft_strlen(s) + 1);
	i = 0;
	if (res == 0)
		return (0);
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = ft_strdup("sadfvbf");
	printf("%s", s);
	free(s);
	return (0);
}*/