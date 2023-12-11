/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:46:20 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/11 17:02:19 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*concat;
	int		i;
	int		j;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen((char *)s);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, (char *)s, len);
	dup[len] = '\0';
	return (dup);
}

char	*ft_strchr( const char *s, int c)
{
	char	*dup;
	size_t	i;

	dup = (char *)s;
	i = 0;
	while (i < ft_strlen(dup) + 1)
	{
		if (*(dup + i) == (char)c)
			return (dup + i);
		i++;
	}
	return (NULL);
}
