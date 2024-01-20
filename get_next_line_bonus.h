/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:24:00 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/01/10 17:08:02 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

size_t	ft_gnl_bonus_strlen(char *ptr, char sep);
char	*ft_gnl_bonus_strchr(const char *p, char ch);
char	*ft_gnl_bonus_join(char *ptr, char *helper);
char	*ft_gnl_bonus_change_reminder(char *helper);
char	*ft_gnl_bonus_free(char **ptr1, char **ptr2);
char	*get_next_line(int fd);

#endif