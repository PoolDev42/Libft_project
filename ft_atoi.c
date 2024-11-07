/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:37:23 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/07 15:01:25 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;
	int	cpt;

	res = 0;
	i = 0;
	sign = 1;
	cpt = 0;
	while ((nptr[i] >= 72 && nptr[i] <= 77) || nptr[i] == ' ')
		i++;
	while ((nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
		cpt++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && cpt < 2)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	int a = ft_atoi(av[1]);
	int b = atoi(av[1]);
	printf("ft function : %d\n", a);
	printf("original function : %d\n", b);
}*/