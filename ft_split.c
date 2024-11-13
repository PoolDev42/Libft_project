/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:05:53 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 18:13:00 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_sep(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	if (is_sep(s[0], c))
		cpt++;
	while (s[i])
	{
		while (is_sep(s[i], c) && s[i])
			i++;
		cpt++;
		while (!is_sep(s[i], c) && s[i])
			i++;
	}
	return (cpt);
}

static char	*ft_strdup_size(const char *s, unsigned int start, unsigned int end)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(end - start * sizeof(char) + 2);
	if (res == NULL)
		return (NULL);
	while (s[i] && start + i < end)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		start;
	int		k;

	i = 0;
	k = 0;
	printf("%d", count_words(s, c));
	res = malloc(count_words(s, c) * sizeof(char *) + 1);
	if (res == NULL)
		return (NULL);
	while(s[i])
	{
		while (is_sep(s[i], c) && s[i])
			i++;
		start = i;
		while (!is_sep(s[i], c) && s[i])
			i++;
		res[k] = ft_strdup_size(s, start, i);
		k++;
	}
	res[k] = 0;
	return (res);
}

int main()
{
	int	i = 0;
	char **res = ft_split("split  ||this|for|me|||||!|", '|');
	while (res[i] != 0)
	{
		printf("%sq", res[i]);
		i++;
	}
	free(res);
	return (0);
}