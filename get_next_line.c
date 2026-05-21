/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:19:49 by awsall            #+#    #+#             */
/*   Updated: 2026/05/21 15:05:50 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line"

char	*ft_strjoin_free(char * save, char *temp)
{
	char	*nuevo;

	nuevo = ft_strjoin(save, temp);
	if (!nuevo)
		return (NULL);
	free (save);
	return (nuevo);
}
char	*ft_therest(char *save)
{
	int		i;
	int		j;
	char 	*new_save;

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
char	*ft_form_line(char *save)
{
	int	i;
	char	*line;

	i = 0;
	if (save[i] == '\0')
		return (NULL);
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	line = ft_calloc((i + 2), (sizeof(char));
	i = 0;
	while (save[i] != '\0' && save[i] != '\n')
	{	
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
		line[i] = '\n';
	return (line);
}



}
