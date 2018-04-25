/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 19:21:08 by calamber          #+#    #+#             */
/*   Updated: 2018/04/24 19:21:11 by calamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *s1i;

	s1i = s1;
	while (*s1i != '\0')
		s1i++;
	while (n-- > 0 && *s2 != '\0')
		*s1i++ = *s2++;
	*s1i = '\0';
	return (s1);
}