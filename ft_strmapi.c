/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:25:00 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/14 15:55:22 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!str || !f)
		return (0);
	i = 0;
	res = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		res[i] = (*f)(i, str[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char f(unsigned int i, char c)
{
	i = 2;
	char res;
	if (c >= 'a' && c <= 'z')
		res = c - 32;
	else
		res = c;
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char *s1 = "salut les amis";
	char *res = ft_strmapi(s1, *f);
	printf("%s", res);
	free(res);
}*/