/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:45:39 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/11 17:02:17 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*next_line;
	char		*buf;
	int			nb_line;
	int			len_line;
	int			i;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf || fd < 0 || BUFFER_ SIZE <= 0)
		return (NULL);
	while (ft_strchr(stock, '\n') || nb_line == 0)
	{
		nb_line = read(fd, buf, BUFFER_SIZE);
		if (!stock)
			stock = ft_strdup(buf);
		else
			stock = ft_strjoin(stock, buf);
	}
	len_line = 0;
	while (stock[len_line] != '\n')
		len_line++;
	while (i < len_line)
	{
		next_line[i] = stock[i];
		i++;
	}
	next_line[i] = '\n';
}
