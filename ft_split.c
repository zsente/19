/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:33:50 by zoesente          #+#    #+#             */
/*   Updated: 2022/12/02 00:14:16 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t fct_nbrword(char const *s, char c)
{
    int i; 
    int count; 

    i = 0; 
    count = 0; 

    while(s[i])
    {
        if(s[i] == c)
        {
            i++;
        }
        else
        {
            count++; 
            while(s[i] && s[i] != c)
                i++; 
        }
    }
    return(count); 
}

static char *ft_putword(char *word, int i, char const *s, int word_len)
{
    int j; 

    j = 0; 
    while(j < word_len)
    {
        word[j]= s[i - word_len + j]; 
        j++; 
    }
    word[j] = '\0';
    return(word); 
}

static char **ft_cutword(char **res, char const *s, char c, int word_nb)
{
    int i; 
    int word; 
    int word_len; 

    word = 0; 
    word_len = 0; 
    i = 0; 
    while(word < word_nb)
    {
        while(s[i] && s[i] == c)
            i++; 
        while(s[i] && s[i] != c) 
        {
            i++; 
            word_len++; 
        }
        res[word] = (char*)malloc(sizeof(char) * (word_len + 1)); 
        if(!res)
            return(NULL); 
        ft_putword(res[word], i, s, word_len); 
        word_len = 0;
        word++;  
    }
    res[word] = 0; 
    return(res); 
}

char **ft_split(char const *s, char c)
{
    char **res; 
    int nbr_word; 

    nbr_word = fct_nbrword(s, c); 
    res = (char**)malloc(sizeof(char*) * (nbr_word + 1)); 
    if(!res)
        return(NULL); 
    ft_cutword(res, s, c, nbr_word); 
    return(res); 
}