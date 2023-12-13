/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:46:32 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/13 00:54:00 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE

# define GET_NEXT_LINE

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strchr( const char *s, int c);s
char	*del_for_next_line(char *stock);
char	*putline(char *stock);
char	*get_line(int fd, char *stock);

#endif