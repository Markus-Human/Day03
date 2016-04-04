/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 11:58:55 by mhuman            #+#    #+#             */
/*   Updated: 2016/04/04 12:15:13 by mhuman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int index;
	int mhuman;

	index = 0;

	while (index < size)
	{
		
		if (tab[index] > tab[index + 1])
		{
			mhuman = tab[index + 1];
			tab[index + 1] = tab[index];
			tab[index] = mhuman;
			index = 0;
		}
		else
			index++;
	}

}

