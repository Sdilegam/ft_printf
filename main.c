/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:50:17 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/10/24 19:22:00 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;

	i = 1;
	char *format = "Test n%d: %40.4i %10d\n";
	int test1 = ft_printf(format, i,  12, 34);
	i++;
	int test2 = printf(format, i,  12, 34);
	printf("%d|%d", test1, test2);
}