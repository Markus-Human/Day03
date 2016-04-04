/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 10:51:00 by mhuman            #+#    #+#             */
/*   Updated: 2016/04/04 11:55:01 by mhuman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	if (*str == '\0')
		return (0);

	int	x;
	int y;
	int z;

	z = 1;
	y = 0;
	x = 0;

	if (str[0] == '-')
	{
		z = -1;
		x++;
	}

	while (str[x] != '\0')
	{
		y = y*10 + str[x] - '0';
		++x;
	}
	return z*y;
}
