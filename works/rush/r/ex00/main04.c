/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 20:10:28 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 21:31:10 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
		display_rush(ft_atoi(argv[1]), ft_atoi(argv[2]), "ACCABB");
	return (0);
}
