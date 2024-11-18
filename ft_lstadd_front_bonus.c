/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:47:56 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 15:36:12 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 32;
	int	b = 42;
	t_list	*ptr = ft_lstnew(&a);
	printf("%d\n", *(int*)ptr->content);
	ft_lstadd_front(&ptr, ft_lstnew(&b));
	printf("%d", *(int*)ptr->content);
	free(ptr);
}*/