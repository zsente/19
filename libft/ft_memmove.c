/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:08:53 by zoesente          #+#    #+#             */
/*   Updated: 2022/12/03 23:30:09 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t           i;
    unsigned char    *s1; 
    unsigned char    *s2; 
   
    i = 0; 
    s1 = (unsigned char*) src; 
    s2 = (unsigned char*) dst; 
    if(!src && !dst)
        return(NULL); 
    if(s1 < s2)
    {
        while(i < len)
        {
            s2[len - 1] = s1[len - 1]; 
            len--; 
        }
    }
    else 
    {
        while(i < len)
        {
            s2[i] = s1[i]; 
            i++; 
        }
    }
    return(dst);
}