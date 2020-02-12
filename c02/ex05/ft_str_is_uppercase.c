/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 22:14:50 by yocho             #+#    #+#             */
/*   Updated: 2020/02/02 23:08:19 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	else
		while (str[i] != 0)
		{
			if (!(str[i] >= 65 && str[i] <= 90))
			{
				return (0);
			}
			i++;
		}
	return (1);
}
