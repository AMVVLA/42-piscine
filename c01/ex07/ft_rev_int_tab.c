/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:59:42 by yocho             #+#    #+#             */
/*   Updated: 2020/01/29 21:49:56 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int arr;

	i = 0;
	while (i < size - 1)
	{
		arr = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = arr;
		i++;
		size--;
	}
}
