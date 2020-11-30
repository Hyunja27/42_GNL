/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:49:59 by spark             #+#    #+#             */
/*   Updated: 2020/11/30 23:20:40 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int tg)
{
	while (*str != (unsigned char)tg)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (char *)str;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rt;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(rt = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (*s1)
		rt[i++] = *s1++;
	while (*s2)
		rt[i++] = *s2++;
	rt[len] = 0;
	return (rt);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*rt;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (0);
	while (str[i])
	{
		rt[i] = str[i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
