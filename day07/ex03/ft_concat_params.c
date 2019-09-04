/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:00:40 by equiana           #+#    #+#             */
/*   Updated: 2019/07/11 17:04:31 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_def(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 0;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			size++;
		}
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*arr;

	i = 1;
	size = size_def(argc, argv);
	arr = (char*)malloc(sizeof(*arr) * (size + argc - 1));
	if (arr == NULL)
		return (0);
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			arr[size++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			arr[size++] = '\n';
		i++;
	}
	arr[size] = '\0';
	return (arr);
}
