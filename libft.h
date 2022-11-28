/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:50:03 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/28 15:47:26 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_isalpha(int c); 
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c); 
int ft_isprint(int c); 
size_t ft_strlen(const char *str);
//void *ft_memset (void *b, int c, size_t len)
int ft_toupper(int c); 
int ft_tolower(int c); 
//size_t ft_strlcpy(const char * restrict dst, const char * restrict src, size_t dstsize);
int ft_strlcat(char *dst, char *src, int dstsize);
char *ft_strnstr(char *haystack, char *needle, int len);
char *ft_strchr(const char *str, int c); 

#endif