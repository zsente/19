/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:13 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/29 21:46:34 by zoesente         ###   ########.fr       */
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
    size_t len; 

    len = ft_strlen(dst); 
    
    i = 0; 
    
    while(i < dstsize - len - 1)
    {
        dst[len + i] = src[i];
        i++;
    }
   dst[len + i] = '\0';
    
    return(ft_strlen(src) + len);
}