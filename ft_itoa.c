/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:41:57 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/15 15:13:56 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	long	num;
	int		cpt;

	cpt = 0;
	num = (long) n;
	if (num < 0)
	{
		cpt++;
		num = -num;
	}
	while (num > 0)
	{
		cpt++;
		num /= 10;
	}
	return (cpt);
}

static void	init_variables(long *num, int *i, int n)
{
	*num = (long)n;
	*i = count_digits(n);
	if (n < 0)
	{
		n = -n;
		*num = *num * -1;
	}
}

static char	calculate_digit(long *num, int *i)
{
	char	res;

	res = *num % 10 + '0';
	*num = *num / 10;
	*i = *i - 1;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	num;

	if (n == 0)
	{
		res = malloc(2);
		if (!res)
			return (NULL);
		res[0] = 0 + '0';
		res[1] = '\0';
		return (res);
	}
	init_variables(&num, &i, n);
	res = malloc(count_digits(n) + 1);
	if (res == NULL)
		return (NULL);
	res[i] = '\0';
	i--;
	while (num > 0)
		res[i] = calculate_digit(&num, &i);
	if (n < 0)
		res[i] = '-';
	return (res);
}

/*#include <stdio.h>
int main(void)
{
	char *res = ft_itoa(6354763);
	printf("%s\n", res);
	free(res);
	return (0);
}*/