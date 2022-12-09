/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:38:20 by zoesente          #+#    #+#             */
/*   Updated: 2022/11/30 17:32:21 by zoesente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	dst_size;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	dst_size = 0;
	if (start < s_len)
		dst_size = s_len - start;
	if (dst_size > len)
		dst_size = len;
	ptr = (char *)malloc(sizeof(char) * (dst_size + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, dst_size + 1);
	return (ptr);
}
