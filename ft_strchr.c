/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:32:55 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/06 15:03:58 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *) s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (b + i);
		i++;
	}
	return ((void *)0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strchr("salut les amis", 'l'));
    return 0;
}*/