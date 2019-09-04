/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:37:39 by equiana           #+#    #+#             */
/*   Updated: 2019/07/09 19:09:17 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;

	count = 0;
	while (src[count] != '\0')
	{
		if (count < size - 1)
			dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count);
}
