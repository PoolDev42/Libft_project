/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:56:38 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/14 16:38:07 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	test(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
    {
        *c -= 32;
    }
	i = 2;
}

#include <stdio.h>
int	main(void)
{
	char *s1 = "salut les amis";
	ft_striteri(s1, test);
	printf("%s", s1);
	return (0);
}*/