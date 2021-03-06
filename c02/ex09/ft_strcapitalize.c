/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 22:29:23 by yocho             #+#    #+#             */
/*   Updated: 2020/02/03 12:35:46 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (!(str[i - 1] >= 48 && str[i - 1] <= 57) &&
			!(str[i - 1] >= 65 && str[i - 1] <= 90) &&
			!(str[i - 1] >= 97 && str[i - 1] <= 122) &&
			(str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}
