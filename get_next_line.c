/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/18 21:57:57 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	helper[BUFFER_SIZE + 1];
	char		*ptr;
	int			flag;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	ptr = (char *)malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	ptr = ft_strjoin(ptr, helper);
	flag = 1;
	while (flag > 0 && !ft_strchr(ptr, '\n'))
	{
		flag = read(fd, helper, BUFFER_SIZE);
		if (flag < 0)
			return (free(ptr), NULL);
		helper[flag] = '\0';
		ptr = ft_strjoin(ptr, helper);
	}
	if (ptr[0] == '\0')
		return (free(ptr), NULL);
	else
		ft_reminder(ptr, helper);
	return (ptr);
}
