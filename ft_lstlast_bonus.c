/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:14:15 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 13:20:32 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 32;
	int	b = 42;
	t_list	*ptr = ft_lstnew(&a);
	ft_lstadd_front(&ptr, ft_lstnew(&b));
	printf("%d", *(int*)ft_lstlast(ptr)->content);
	free(ptr);
}*/