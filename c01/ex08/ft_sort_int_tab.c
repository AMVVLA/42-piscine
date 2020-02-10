/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 22:33:02 by yocho             #+#    #+#             */
/*   Updated: 2020/01/30 00:00:54 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int arr;

	i = 0;
	while (size > 0)
	{
		i = 0;
		size--;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				arr = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = arr;
			}
			i++;
		}
	}
}
