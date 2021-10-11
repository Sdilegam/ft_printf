/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:41:42 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/11 22:14:54 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	test_chr;
	char	*test_string;
	char	*format_string;

	test_chr = ':';
	test_string = "Alors tu sais comment tout";
	format_string = "Paroles de \"comme des enfants\"%c %s.\n %p";
	ft_printf("ceci %c est un test.", 'a');
}
