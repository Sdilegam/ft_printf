/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:01:09 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/11 22:03:59 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_size	ft_convert_char(char **conversion, char chr)
{
	*conversion = ft_calloc(2, sizeof(char));
	conversion[0][0] = chr;
	return (1);
}

t_size	ft_convert_str(char **conversion, char *str)
{
	*conversion = ft_strdup(str);
	return (ft_strlen(str));
}
