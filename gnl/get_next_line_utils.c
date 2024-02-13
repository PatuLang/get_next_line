/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:31:37 by plang             #+#    #+#             */
/*   Updated: 2023/12/18 10:31:40 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_free(char *read_lines, char *static_buff, int read_bytes)
{
	if (read_bytes == -1)
		ft_strcpy(static_buff, "");
	free(read_lines);
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = (char)c;
	i = 0;
	if (chr == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s1);
	ptr = (char *)malloc(n + 1 * sizeof(char));
	if (ptr == 0)
		return (NULL);
	while (i < n)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	i = 0;
	j = 0;
	newstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
