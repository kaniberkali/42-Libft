/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:06:56 by akaniber          #+#    #+#             */
/*   Updated: 2022/10/09 15:19:40 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;
	size_t	counter;

	letter = (unsigned char)c;
	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == letter)
			return ((char *)&s[counter]);
		counter++;
	}
	if (c == '\0')
		return ((char *)&s[counter]);
	return (0);
}
