/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:24:00 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:24:00 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

// 100 * 4
// calloc(100, 5)
// s = ismail
// *(s+1) 
void	*ft_calloc(unsigned int count, unsigned int size)
{
	char	*mem;
	int		len;

	len = count * size;
	mem = malloc(len);
	if (mem == 0)
		return (0);
	ft_bzero(mem, len);
	return (mem);
}
#include <stdio.h>

int main()
{
	int *a;

	a = calloc(7, sizeof(int));
	int i = 0;
	while(i < 7)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
