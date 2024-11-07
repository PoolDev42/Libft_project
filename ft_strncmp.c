/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:10:16 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/07 16:25:39 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				cpt1;
	int				cpt2;

	i = 0;
	cpt1 = 0;
	cpt2 = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		cpt1 += s1[i];
		cpt2 += s2[i];
		if (cpt1 > cpt2)
			return (1);
		if (cpt1 < cpt2)
			return (-1);
		i++;
	}
	return (cpt1 - cpt2);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft function : %d\n", ft_strncmp("salut", "sa", 3));
	printf("original function : %d\n", strncmp("salut", "sa", 3));
}*/