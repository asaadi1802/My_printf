/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:36:21 by asaadi            #+#    #+#             */
/*   Updated: 2019/12/19 15:29:46 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, t_var *var)
{
	int i;

	i = 0;
	if (s)
		while (s[i])
		{
			write(fd, &s[i++], 1);
			var->count++;
		}
}