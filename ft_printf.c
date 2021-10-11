/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:01 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/11 22:15:32 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	g_modifiers[6];

int	ft_get_conv(char **conversion, char chr, va_list arg_list)
{
	if (chr == 'c')
		return (ft_convert_char(conversion, va_arg(arg_list, int)));
	if (chr == 's')
		return (ft_convert_str(conversion, va_arg(arg_list, char *)));
	if (chr == 'p')
		return (ft_put_hexa(va_arg(arg_list, void *)));
}

int	is_modifiers(int chr)
{
	if (chr == '#')
		return (1);
	if (chr == ' ')
		return (1);
	if (chr == '.')
		return (1);
	if (chr == '+')
		return (1);
	if (chr == '-')
		return (1);
	if (chr == '0')
		return (1);
	return (0);
}

int	ft_count_modifiers(const char *string)
{
	int	index;

	index = 0;
	while (is_modifiers(string[index]))
	{
		if (string[index] == '-')
			g_modifiers[0] = 1;
		else if (string[index] == '#')
			g_modifiers[1] = 1;
		else if (string[index] == '0')
			g_modifiers[2] = 1;
		else if (string[index] == ' ')
			g_modifiers[3] = 1;
		else if (string[index] == '.')
			g_modifiers[4] = 1;
		else if (string[index] == '+')
			g_modifiers[5] = 1;
		index++;
	}
	return (index);
}

int	ft_printf(const char *string, ...)
{
	char	*conversion[1];
	va_list	args_list;
	t_size	count;
	t_size	len;

	count = 0;
	len = 0;
	va_start(args_list, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			string += ft_count_modifiers(string);
			count += ft_get_conv(conversion, *string, args_list);
			ft_putstr(conversion[0]);
			string++;
			free(conversion[0]);
		}
		else
		{
			write(1, string, 1);
			string++;
			count++;
		}
	}
	return (count);
}
