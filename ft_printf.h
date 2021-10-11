/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:51:10 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/11 22:05:59 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *string, ...);
int		ft_put_hexa(void *ptr);
t_size	ft_putchar(char chr);
t_size	ft_putstr(char *string);
t_size	ft_convert_char(char **conversion, char chr);
t_size	ft_convert_str(char **conversion, char *str);
#endif