/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:40:02 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:40:02 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include<stdlib.h>

static char	*trim_begin(char const *s1, char const *set)
{
	while (ft_strchr(set, *s1))
		s1++;
	return ((char *) s1);
}

static int	trim_end(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len-- && ft_strchr(set,  s1[len]))
		;
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	char	*result;

	if (s1 == 0)
		return (0);
	s1 = trim_begin(s1, set);
	count = trim_end(s1, set);
	result = malloc(count * sizeof(char) + 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, s1, count + 1);
	return (result);
}
