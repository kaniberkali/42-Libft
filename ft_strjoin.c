/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:24:25 by akaniber          #+#    #+#             */
/*   Updated: 2022/10/09 15:06:58 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	length_s1;
	size_t	length_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(&result[0], s1, length_s1 + 1);
	ft_strlcpy(&result[length_s1], s2, length_s2 + 1);
	return (result);
}
