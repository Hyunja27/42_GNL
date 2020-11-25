/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:49:59 by spark             #+#    #+#             */
/*   Updated: 2020/11/25 22:36:29 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		rt_n_store(char *buff, char **room, char **line)
{
	char	*anchor;
	char	*tmp;

	tmp = 0;
	anchor = ft_strchr(buff, '\n');
	*anchor = 0;
	*line = !(*room) ? ft_strdup(buff) : ft_strjoin(*room, buff);
	if (*room)
		free(*room);
	*room = ft_strdup(anchor + 1);
}

int				get_next_line(int fd, char **line)
{
	static char *room[OPEN_MAX + 1];
	char		buff[BUFFER_SIZE + 1];
	int			tmp_i;
	int			rt;

	rt = 0;
	if (line == 0 || fd > OPEN_MAX || fd <= 0)
		return (-1);
	while ((rt = read(fd, buff, BUFFER_SIZE)) >= 0)
	{
		buff[BUFFER_SIZE] = 0;
		room[fd] = !(room[fd]) ? ft_strdup("") : ft_strjoin(room[fd], buff);
		if (ft_strchr(room[fd], '\n'))
		{
			rt_n_store(buff, &room[fd], line);
			rt = 1;
			break ;
		}
		else if (rt != 0)
			room[fd] = !room[fd] ? ft_strdup(buff) : ft_strjoin(room[fd], buff);
		else if (rt == 0)
		{
			*line = ft_strjoin(room[fd], buff);
			free(room[fd]);
			break ;
		}
	}
	return (rt);
}
