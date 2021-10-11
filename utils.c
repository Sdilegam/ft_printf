/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:42:58 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/11 22:00:22 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_size	ft_putchar(char chr)
{
	write(1, &chr, 1);
	return (1);
}

t_size	ft_putstr(char *string)
{
	int	index;

	if (!string)
		return (ft_putstr("(null)"));
	index = 0;
	while (string[index])
		index += ft_putchar(string[index]);
	return (index);
}
