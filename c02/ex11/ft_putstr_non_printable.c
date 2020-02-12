/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:06:46 by yocho             #+#    #+#             */
/*   Updated: 2020/02/05 10:23:26 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char str)
{
	int div;
	int mod;

	div = str / 16;
	div = div > 9 ? div + 'a' - 10 : div + '0';
	mod = str % 16;
	mod = mod > 9 ? mod + 'a' - 10 : div + '0';
	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}
void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 126 || (str[i] >= 0 && str[i] <= 31))
			ft_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
