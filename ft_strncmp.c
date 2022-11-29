/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:45:20 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/29 15:40:31 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i; 

    i = 0; 
    while(i < n)
    {
        if(s1[i] != s2[i])
        {
            return(s1[i] - s2[i]); 
        }
    i++; 
    }
    return(0); 
}
