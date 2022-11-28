/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:50:03 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/28 21:24:56 by zoesente         ###   ########.fr       */
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
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c); 
int ft_tolower(int c); 
char *ft_strnstr(const char *haystack, const char *needle, size_t len); 
char *ft_strchr(const char *str, int c); 
#endif