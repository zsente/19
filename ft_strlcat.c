/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:13 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/30 17:34:54 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i; 
    size_t dstlen; 
    size_t srclen; 

    i = 0; 
    dstlen = ft_strlen(dst); 
    srclen = ft_strlen(src); 

   if(dstsize > 0 &&  dstlen < dstsize - 1) 
   {
        while(src[i] && i < dstsize - dstlen - 1)
        {
            dst[dstlen + i] = src[i]; 
            i++; 
        }
        dst[dstlen + i] = '\0'; 
   }
    if(dstlen > dstsize)
         dstlen = dstsize; 

    return(dstlen + srclen); 

}