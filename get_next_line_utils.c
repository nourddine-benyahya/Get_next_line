/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/18 22:03:31 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *ptr, char c)
{
	int	i;

	i = 0;
	while (ptr[i] != '\0' && ptr[i] != c)
		i++;
	if (ptr[i] == c)
		return (1);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	free(s1);
	return (ptr);
}

void	ft_reminder(char *ptr, char *helper)
{
	int	i;
	int	j;

	i = 0;
	while (ptr[i] != '\n' && ptr[i] != '\0')
		i++;
	if (ptr[i] == '\n')
		i++;
	j = 0;
	while (ptr[i] != '\0')
	{
		helper[j] = ptr[i];
		ptr[i] = '\0';
		i++;
		j++;
	}
	helper[j] = '\0';
}
