/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:48:51 by zoesente          #+#    #+#             */
/*   Updated: 2022/12/01 10:39:04 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len_s1; 
    size_t len_set; 
    size_t len_s2; 
    size_t len_res;
    char *s2; 
    char *res; 

    len_s1 = ft_strlen(s1); 
    len_set = ft_strlen(set); 
    s2 = ft_strnstr(s1, set, len_s1); 
    len_s2 = ft_strlen(s2); 
    len_res = 0;  
    if(len_s1 > len_set)
        len_res = len_s1 - len_set; 
    res = malloc(sizeof(char)*(len_res + 1)); 
    if(!res)
        return(NULL); 
    ft_strlcpy(res, s1, len_s1 - len_s2 + 1);
    ft_strlcat(res, ft_substr(s2, len_set, len_s2 - len_set),len_s1 + len_s2 - len_set + 1); 
    return(res); 
}