/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:37:39 by equiana           #+#    #+#             */
/*   Updated: 2019/07/09 19:04:52 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	count;

	src_size = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	dest_size = count;
	while (src[src_size] != '\0')
		src_size++;
	i = 0;
	while (src[i] != '\0')
	{
		if (count < size - 1)
			dest[count] = src[i];
		count++;
		i++;
	}
	dest[count - 1] = '\0';
	if (size >= dest_size)
		return (count);
	else
		return (src_size + size);
}
