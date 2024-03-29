/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:46:55 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/01/12 14:14:52 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

size_t	ft_gnl_strlen(char *ptr, char sep);
char	*ft_gnl_strchr(const char *p, char ch);
char	*ft_gnl_join(char *ptr, char *helper);
char	*ft_gnl_change_reminder(char *helper);
char	*ft_gnl_free(char **ptr1, char **ptr2);
char	*get_next_line(int fd);

#endif