/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrfd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:15:52 by vtestut            #+#    #+#             */
/*   Updated: 2023/03/15 21:36:37 by vtestut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrfd(const char *str, int fd)
{
	if (!write(fd, NULL, 0))
		write(fd, str, ft_strlen(str));
}
