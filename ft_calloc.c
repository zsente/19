/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:13:43 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/29 16:33:29 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr; 

    ptr = (void*) malloc(count * size); 
    if(!ptr)
        return  (NULL);
    ft_bzero(ptr, count); 
    return(ptr); 
}
