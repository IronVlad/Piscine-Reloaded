/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevilhaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:15:29 by yevilhaw          #+#    #+#             */
/*   Updated: 2019/09/06 17:47:19 by yevilhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int l;
	int i;
	int *arr;

	l = max - min;
	if (l <= 0)
		return (NULL);
	i = 0;
	if (!(arr = (int *)malloc(sizeof(int) * (l))))
		return (NULL);
	while (i < l)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
