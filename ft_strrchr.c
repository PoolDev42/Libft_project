/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:48:27 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/06 15:33:40 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		lastindex;
	char	*res;

	i = 0;
	lastindex = -1;
	res = (char *) s;
	while (s[i])
	{
		if (s[i] == c)
			lastindex = i;
		i++;
	}
	if (lastindex == -1)
		return ((void *)0);
	return (res + lastindex);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strrchr("salut les amis", 'l'));
    return 0;
}*/