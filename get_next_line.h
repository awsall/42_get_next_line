/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:24:52 by awsall            #+#    #+#             */
/*   Updated: 2026/06/22 15:06:07 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

char				*get_next_line(int fd);
unsigned long int	ft_strlen(char *str);
char				*ft_strchr(char *save, int caracter);
void				ft_bzero(void *str, unsigned long int n);
char				*ft_strjoin(char *s1, char *s2);
void				*ft_calloc(size_t count, size_t size);
#endif
