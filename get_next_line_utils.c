/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:44:31 by awsall            #+#    #+#             */
/*   Updated: 2026/06/03 13:48:29 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned long int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *save, int caracter)
{
	unsigned long int	i;

	i = 0;
	while (save[i] != caracter && save[i] != '\0')
		i++;
	if (save[i] == caracter)
		return (save);
	return (NULL);
}

void	ft_bzero(void *str, unsigned long int n)
{
	char				*s;
	unsigned long int	i;

	s = (char *) str;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
