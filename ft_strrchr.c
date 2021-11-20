/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:26 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:38:26 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	int				len;

	len = ft_strlen(s);
	uc = c;
	if (uc == 0)
		return ((char *) s + len);
	while (len--)
	{
		if (s[len] == uc)
			return ((char *) s + len);
	}
	return (0);
}
