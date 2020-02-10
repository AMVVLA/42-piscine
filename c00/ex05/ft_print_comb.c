/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:54:18 by yocho             #+#    #+#             */
/*   Updated: 2020/01/28 03:19:00 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha(char arr[])
{
	ft_putchar(arr[0]);
	ft_putchar(arr[1]);
	ft_putchar(arr[2]);
	if (arr[0] != '7')
	{
		ft_putchar(arr[3]);
		ft_putchar(arr[4]);
	}
}

void	ft_print_comb(void)
{
	char	arr[5];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	arr[3] = ',';
	arr[4] = ' ';
	while (arr[0] <= '7')
	{
		while (arr[1] <= '8')
		{
			while (arr[2] <= '9')
			{
				if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
				{
					ft_alpha(arr);
				}
				arr[2]++;
			}
			arr[1]++;
			arr[2] = arr[1];
		}
		arr[0]++;
		arr[1] = arr[0];
	}
}
