/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorona <jocorona@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:45:26 by jocorona          #+#    #+#             */
/*   Updated: 2021/08/14 01:01:58 by jocorona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*s_start;
	char	*sub;
	char	*sub_iter;

	if (!s)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	s_start = (char *)s;
	s_len = ft_strlen(s);
	sub_iter = sub;
	s += start;
	while (((size_t)(s - s_start) < s_len) && len--)
		*sub_iter++ = *s++;
	*sub_iter = '\0';
	return (sub);
}
