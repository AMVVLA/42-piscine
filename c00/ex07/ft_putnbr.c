/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 01:30:56 by yocho             #+#    #+#             */
/*   Updated: 2020/02/06 20:28:25 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		write(1, "-2147483648", 11);
	}
}
