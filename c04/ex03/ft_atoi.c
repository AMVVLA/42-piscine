/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 20:29:35 by yocho             #+#    #+#             */
/*   Updated: 2020/02/08 22:22:34 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	count = 0;
	result = 0;
	if (!*str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 0)
		count = 1;
	else
		count = -1;
	while (*str && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + str[i++] - '0';
	return (count * result);
}
