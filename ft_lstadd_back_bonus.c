/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:21:02 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 15:35:41 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 32;
	int	b = 42;
	int	c = 24;
	t_list	*ptr = ft_lstnew(&a);
	ft_lstadd_front(&ptr, ft_lstnew(&b));
	ft_lstadd_back(&ptr, ft_lstnew(&c));
	printf("%d", *(int*)ft_lstlast(ptr)->content);
	free(ptr);
}*/