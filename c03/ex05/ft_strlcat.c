/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:34:19 by yocho             #+#    #+#             */
/*   Updated: 2020/02/06 13:27:05 by yocho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int l;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	l = i;
	if (size != 0)
	{
		while (*src && i < size - 1)
		{
			dest[i] = *src;
			i++;
			src++;
		}
		dest[i] = '\0';
	}
	if (l < size)
		return (l + j);
	else
		return (size + j);
}
