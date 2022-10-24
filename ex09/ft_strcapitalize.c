/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:55:46 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/24 16:25:22 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i])
	{
		if (space == 1)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
				space = 0;
		if (str[i] == 32)
			space = 1;
		else if (str[i] >= 43 && str[i] <= 45)
			space = 1;
		else if (str[i] == 59)
			space = 1;
		else if (str[i] == 63)
			space = 1;
		i++;
	}
	return (str);
}
