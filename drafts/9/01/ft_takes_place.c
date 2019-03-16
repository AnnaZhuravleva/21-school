/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:37:20 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 18:19:19 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;
	int		m;

	m = hour % 100;
	h = hour / 100;
	printf("%d", h);
	if (h == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. \
AND %d.00 A.M.\n", h + 1);
	else if (h < 12 && h > 0)
		printf("THE FOLLOWING TAKES \
PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	else if (h == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 PM AND 1.00 P.M.\n");
	else if (h == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	else if (h > 12 && h < 23)
		printf("THE FOLLOWING TAKES PLACE\
 BETWEEN %d.00 P.M. AND %d.00 P.M.\n", h - 12, h - 11);
}
