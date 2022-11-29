/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:56:13 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/29 21:02:36 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i; 

    i = 0;
    while(str[i] != '\0')
        i++; 
    
    return(i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i; 

    i = 0; 

    if (dstsize == 0)
        return (ft_strlen(src));

    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

