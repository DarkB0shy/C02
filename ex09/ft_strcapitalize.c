/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:55:46 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/27 09:56:53 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sheck;

	i = 0;
	sheck = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (sheck == 1)
			{
				str[i] -= 32;
				sheck = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			sheck = 0;
		else
			sheck = 1;
		i++;
	}
	return (str);
}
