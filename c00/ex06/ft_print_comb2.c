/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 00:11:11 by yocho             #+#    #+#             */
/*   Updated: 2020/01/27 18:01:54 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha(char arr[4])
{
	if (arr[0] == '9' && arr[1] == '8' && arr[2] == '9' && arr[3] == '9')
	{
		ft_putchar(arr[0]);
		ft_putchar(arr[1]);
		ft_putchar(' ');
		ft_putchar(arr[2]);
		ft_putchar(arr[3]);
	}
	else
	{
		ft_putchar(arr[0]);
		ft_putchar(arr[1]);
		ft_putchar(' ');
		ft_putchar(arr[2]);
		ft_putchar(arr[3]);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_one(char arr[4])
{
	arr[2]++;
	arr[3] = '0';
}

void	ft_zero(char arr[4])
{
	if (arr[0] * 10 + arr[1] < arr[2] * 10 + arr[3])
	{
		ft_alpha(arr);
	}
}

void	ft_print_comb2(void)
{
	char arr[4];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	arr[3] = '0';
	while (arr[0] <= '9')
	{
		while (arr[1] <= '9')
		{
			while (arr[2] <= '9')
			{
				while (arr[3] <= '9')
				{
					ft_zero(arr);
					arr[3]++;
				}
				ft_one(arr);
			}
			arr[1]++;
			arr[2] = '0';
		}
		arr[0]++;
		arr[1] = '0';
	}
}
