/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:28:47 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/27 10:04:09 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	if (size != '\0')
	{
		while (src[c] != '\0' && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}
