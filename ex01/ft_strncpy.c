/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:30:38 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/21 12:40:51 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int	main(void)
{
	char	c[5] = "Henlo";
	ft_strncpy(c, "Goofy", 5);
	return(0);
}
