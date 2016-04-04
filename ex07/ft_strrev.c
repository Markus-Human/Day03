/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 10:22:11 by mhuman            #+#    #+#             */
/*   Updated: 2016/04/04 10:48:56 by mhuman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ftstrrev(char	*str)
{
	char	mhuman;
	int index;
	int size;

	index = 0;
	size = 0;

	while (str[size])
	{
		size++;
		size--;
	}

	while (index < size)
	{
		mhuman = str[size];
		str[size] = str[index];
		str[index] = mhuman;
		index++;
		size--;
	}
	return (str);
}


