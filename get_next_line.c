/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:45:39 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/10 17:05:50 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd);

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*next_line;

	if (!fd)
		return (NULL);
}