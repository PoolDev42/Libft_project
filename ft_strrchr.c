/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:48:27 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/13 12:21:30 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long		i;
	char		*res;

	i = ft_strlen(s);
	res = (char *) s;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (res + i);
		i--;
	}
	return ((void *)0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strrchr( "Salut les amis", "l"));
    return 0;
}*/