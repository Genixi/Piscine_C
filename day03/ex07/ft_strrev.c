/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:25:15 by equiana           #+#    #+#             */
/*   Updated: 2019/07/05 21:12:10 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	c;
	int		i;
	int		count;
	char	*strtemp;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	strtemp = str;
	i = 0;
	while (i < count)
	{
		c = strtemp[i];
		strtemp[i] = strtemp[count];
		strtemp[count] = c;
		i++;
		count--;
	}
	return (strtemp);
}
