/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:19:49 by awsall            #+#    #+#             */
/*   Updated: 2026/06/15 14:44:28 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_free(char *save, char *temp)
{
	char	*new;

	new = ft_strjoin(save, temp);
	if (!new)
	{
		free (save);
		return (NULL);
	}
	free(save);
	return (new);
}

char	*the_rest(char *save)
{
	int		i;
	int		j;
	char	*new_save;

	i = 0;
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	if (save[i] == '\0')
	{
		free(save);
		return (NULL);
	}
	new_save = ft_calloc(ft_strlen(save) - i + 1, sizeof(char));
	if (!new_save)
	{
		free(save);
		return (NULL);
	}
	i++;
	j = 0;
	while (save[i] != '\0')
		new_save[j++] = save[i++];
	free(save);
	return (new_save);
}

char	*form_line(char *save)
{
	int		i;
	char	*line;

	i = 0;
	if (!save || save[0] == '\0')
		return (NULL);
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] != '\0' && save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	return (line);
}

char	*read_until_newline(int fd, char *save)
{
	int		n_of_caracter;
	char	*temp;

	if (!save)
		save = ft_calloc(1, 1);
	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	n_of_caracter = 1;
	while (n_of_caracter > 0)
	{
		n_of_caracter = read(fd, temp, BUFFER_SIZE);
		if (n_of_caracter == -1)
		{
			free(temp);
			free(save);
			return (NULL);
		}
		temp[n_of_caracter] = '\0';
		save = ft_strjoin_free(save, temp);
		if (ft_strchr(save, '\n'))
			break ;
	}
	free (temp);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	save = read_until_newline(fd, save);
	if (save == NULL)
		return (NULL);
	line = form_line(save);
	save = the_rest(save);
	return (line);
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free (line);
	}
	return (0);
}*/
