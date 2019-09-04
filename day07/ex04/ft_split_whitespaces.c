/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:22:03 by equiana           #+#    #+#             */
/*   Updated: 2019/07/11 12:33:17 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_of_elements(char *str)
{
	int number;
	int white;
	int el;
	int j;

	j = 0;
	number = 0;
	white = 1;
	el = 0;
	while (str[j] != '\0')
	{
		if ((str[j] != ' ' && str[j] != '\t' && str[j] != '\n') && (el == 0))
		{
			number++;
			white = 0;
			el = 1;
		}
		if ((str[j] == ' ' || str[j] == '\t' || str[j] == '\n') && (white == 0))
		{
			white = 1;
			el = 0;
		}
		j++;
	}
	return (number);
}

char	*get_element(char *str)
{
	int		j;
	int		i;
	int		start;
	char	*element;

	j = 0;
	i = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
		j++;
	start = j;
	while (str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j] != '\0')
	{
		j++;
		i++;
	}
	element = (char *)malloc(sizeof(*element) * (i + 1));
	i = 0;
	while (start < j)
	{
		element[i] = str[start];
		i++;
		start++;
	}
	element[i] = '\0';
	return (element);
}

int		next_pointer(char *element, char *str)
{
	int i;
	int j;
	int size;

	size = 0;
	while (element[size] != '\0')
		size++;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == element[j])
		{
			j++;
			i++;
		}
		if (j >= size)
			return (i + 1);
		i++;
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ptr;
	char	*element;
	int		size;
	int		pointer;
	int		i;

	size = number_of_elements(str);
	ptr = (char**)malloc(sizeof(char*) * (size + 1));
	pointer = 0;
	i = 0;
	while (i < size)
	{
		element = get_element(str + pointer);
		ptr[i] = element;
		pointer = next_pointer(element, str);
		i++;
	}
	ptr[size] = 0;
	return (ptr);
}
