/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:38:24 by bdetune           #+#    #+#             */
/*   Updated: 2021/12/07 17:58:34 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_openfd
{
	int				fd;
	char			*remainer;
	struct s_openfd	*next;
}	t_openfd;

char		*get_next_line(int fd);
void		internal_get_str(int fd, t_openfd *current, \
			int start_index, int *nl_pos);
char		*internal_join(char *dst, char *src);
char		*internal_getremainer(char *remainer, int nl_pos);
char		*internal_get_line(char *remainer, int *nl_pos);
int			internal_hasnl(char *str, int *start_index, int *nl_pos);
t_openfd	*internal_findfd(t_openfd **begin, int fd);

#endif
