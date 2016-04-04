/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 10:04:13 by mhuman            #+#    #+#             */
/*   Updated: 2016/04/04 10:11:07 by mhuman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char	*str)
{
	int index;
	index = 0;

	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

