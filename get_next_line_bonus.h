/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:52:09 by spark             #+#    #+#             */
/*   Updated: 2020/11/30 23:20:23 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 10240
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *str, int tg);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);

#endif
