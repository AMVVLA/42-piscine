/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 23:19:37 by yocho             #+#    #+#             */
/*   Updated: 2020/02/12 16:58:02 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		k = 0;
		j = 0;
		while (str[i + j] == to_find[k])
		{
			k++;
			j++;
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
