/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:49:13 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/18 17:00:10 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*lst_cpy;

	res = NULL;
	lst_cpy = malloc(sizeof(t_list));
	if (!lst_cpy || !lst)
		return (NULL);
	lst_cpy->content = f(lst->content);
	res = lst_cpy;
	while (lst->next)
	{
		res->next = malloc(sizeof(t_list));
		if (!res->next)
			return (ft_lstclear(&lst_cpy, del), NULL);
		lst = lst->next;
		res = res->next;
		res->content = f(lst->content);
	}
	res->next = NULL;
	return (lst_cpy);
}

/*void	*f(void *a)
{
	int *b = a;
	*b += 10;
	return (b);
}

void	del(void *a)
{
	a = NULL;
}

#include <stdio.h>
int	main(void)
{
	t_list	*ptr;
	int	a = 42;

	ptr = ft_lstnew(&a);
	ft_lstmap(ptr, f, del);
	printf("%d", *(int *)ptr->content);
	free(ptr);
}*/