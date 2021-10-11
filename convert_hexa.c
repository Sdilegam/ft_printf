/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:14:18 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/06 22:21:35 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
Function that convert and display "nbr" in the "base_len"-sized "base"
*/
int	convert(unsigned long nbr, int *count)
{
	if (nbr / 16 != 0)
	{
		convert(nbr / 16, count);
	}
	ft_putchar("0123456789abcdef"[nbr % 16]);
	return (++(*count));
}

/*
Main function that first get "base" lenght and stop if it isn't 2 or more,
handle the case of negative "nbr", writing '-', storing it positive in "pos"
and finally call the convert function with the "pos"
*/
int	ft_put_hexa(void *ptr)
{
	unsigned long	pos;
	int				count[1];

	*count = 0;
	pos = (unsigned long) ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + convert(pos, count));
}
