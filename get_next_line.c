/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:45:39 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/13 00:52:27 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);

char	*get_line(int fd, char *stock)
{
	char	*buf;
	int		nb_line;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf || BUFFER_ SIZE <= 0)
		return (NULL);
	while (ft_strchr(stock, '\n') || nb_line == 0)
	{
		nb_line = read(fd, buf, BUFFER_SIZE);
		if (!stock)
			stock = ft_strdup(buf);
		else
			stock = ft_strjoin(stock, buf);
		free(buf);
		return (stock);
	}
}
char	*putline(char *stock)
{
	int			len_line;
	int			i;
	char		*next_line;

	next_line = malloc(sizeof(char) * (ft_strlen(stock) + 2));
	if (!next_line)
	return (NULL);
	len_line = 0;
	while (stock[len_line] != '\n')
		len_line++;
	while (i < len_line)
	{
		next_line[i] = stock[i];
		i++;
	}
	next_line[i] = '\n';
	next_line[i + 1] = '\0';
	return (next_line);
}

char	*del_for_next_line(char *stock)
{
	char	*tmp;
	int		i;
	int		j;

	tmp = NULL;
	i = 0;
	while (stock[i] != '\0')
		i++;
	j = 0;
	while(i <= strlen(stock))
	{
		tmp [j] = stock [i];
		i++;
		j++;
	}
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*next_line;

	if (fd < 0)
		return (NULL);
	stock = get_line(fd, stock)
	if (!stock)
		return (NULL);
	next_line = putline(stock);
	stock = del_for_next_line(stock);
	return (next_line);
}
