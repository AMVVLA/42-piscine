/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:12:19 by yocho             #+#    #+#             */
/*   Updated: 2020/02/12 15:36:49 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int j;

	while (argc - 1 > 0)
	{
		j = 0;
		while (argv[argc - 1][j])
		{
			ft_putchar(argv[argc - 1][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
