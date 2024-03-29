/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:54:51 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/01/17 11:37:20 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*helper;
	char		*ptr;

	ptr = (char *)malloc(1);
	if (!ptr || fd < 0 || BUFFER_SIZE >= INT_MAX
		|| BUFFER_SIZE < 1 || read(fd, ptr, 0) < 0)
		return (ft_gnl_free(&helper, &ptr));
	ptr[0] = '\0';
	ptr = ft_gnl_join(ptr, helper);
	helper = ft_gnl_change_reminder(helper);
	if (!ptr || !helper)
		return (ft_gnl_free(&helper, &ptr));
	while (!ft_gnl_strchr(ptr, '\n') && read(fd, helper, BUFFER_SIZE))
	{
		ptr = ft_gnl_join(ptr, helper);
		helper = ft_gnl_change_reminder(helper);
		if (!ptr || !helper)
			return (ft_gnl_free(&helper, &ptr));
	}
	if (ptr[0] == '\0')
		return (ft_gnl_free(&helper, &ptr));
	return (ptr);
}
