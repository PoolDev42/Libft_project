/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:47 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 12:34:41 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 32;
	int	b = 42;
	int	c = 52;
	t_list	*ptr = ft_lstnew(&a);
	ft_lstadd_front(&ptr, ft_lstnew(&b));
	printf("%d", ft_lstsize(ptr));
	free(ptr);
}*/