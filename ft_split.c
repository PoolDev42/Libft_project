/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:05:53 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/14 21:53:06 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (s[i])
	{
		while (is_sep(s[i], c) && s[i])
			i++;
		if (s[i] == '\0')
			break ;
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
	res = (char *)malloc((end - start + 1) * sizeof(char));
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

void	ft_free(char **res, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (res[i])
			free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		start;
	int		k;

	i = 0;
	k = 0;
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		while (is_sep(s[i], c) && s[i])
			i++;
		start = i;
		while (!is_sep(s[i], c) && s[i])
			i++;
		if (start != i)
		{
			res[k] = ft_strdup_size(s, start, i);
			if (res[k] == NULL)
				return (ft_free(res, k), NULL);
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}

/*int main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	int	i = 0;
	char **res = ft_split(av[1], av[2][0]);
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	printf("%s\n", res[i]);
	free(res);
	return (0);
}*/