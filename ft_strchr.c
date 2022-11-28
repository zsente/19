/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:26 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/28 20:53:04 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i; 

    i = 0; 
    while(s[i] != '\0')
    {
        if(s[i] == (char) c)
            return  ((char*) &s[i]);
        i++;
    }
    if(s[i] == (char) c)
            return  ((char*) &s[i]);

    return(0); 
}