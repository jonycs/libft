/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorona <jocorona@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:58:35 by jocorona          #+#    #+#             */
/*   Updated: 2021/08/14 00:36:14 by jocorona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_end;

	if (c > 127)
		c %= 256;
	s_end = s;
	while (*s_end)
		s_end++;
	while (s_end != s)
	{
		if (*s_end == c)
			return ((char *)s_end);
		s_end--;
	}
	if (*s_end == c)
		return ((char *)s_end);
	return (NULL);
}
