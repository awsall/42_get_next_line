/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:24:52 by awsall            #+#    #+#             */
/*   Updated: 2026/06/03 14:03:55 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

/*
char                    *ft_strjoin_free(char *save, char *temp)
char                    *the_rest(char *save)
char			*form_line(char *save)
char			*read_until_newline(int fd, char *save)
char			*get_next_line(int fd)
*/

/* ---		utils		---*/
unsigned long int	ft_strlen(char *str);
char				*ft_strchr(char *save, int caracter);
void				ft_bzero(void *str, unsigned long int n);
char				*ft_strjoin(char *s1, char *s2);
void				*ft_calloc(size_t count, size_t size);
#endif
