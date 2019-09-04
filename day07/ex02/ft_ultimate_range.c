/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:06:59 by equiana           #+#    #+#             */
/*   Updated: 2019/07/10 23:11:26 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int size;
	int i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int*)malloc(sizeof(*arr) * (size));
	if (arr == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
