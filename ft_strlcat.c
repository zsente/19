/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:13 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/28 21:25:10 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i; 

    i = 0;
    while(s[i] != '\0')
        i++;

    return(i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i; 
    size_t j; 

    i = 0; 
    j = ft_strlen(dst); 
    while(src[i] != '\0' && i < dstsize - 1)
    {
        dst[j + i] = src[i];
        i++;
    }
    dst[j + i] = '\0';
    return(dstsize + ft_strlen(src));
}