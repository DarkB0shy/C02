/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:55:46 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/26 19:19:40 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	space = 0;
	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (str[i] >= 48 && str[i] <= 57)
			space = 0;
		if (space == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
