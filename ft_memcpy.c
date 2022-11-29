/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:53:18 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/28 23:00:43 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0; 
    while(i < n)
    {
        *(char *)(dst + i) =  *(char *)(src + i); 
        i++; 
    }
    return(dst);
}