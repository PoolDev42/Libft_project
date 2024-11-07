/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:37:37 by lcalero           #+#    #+#             */
/*   Updated: 2024/11/07 16:29:56 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isascii(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	ft_bzero(void *s, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_atoi(const char *nptr);

int		ft_strcmp(const char *s1, const char *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif