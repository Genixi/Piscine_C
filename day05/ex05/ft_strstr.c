/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:08:24 by equiana           #+#    #+#             */
/*   Updated: 2019/07/08 15:34:14 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		subcycle(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i] == to_find[i])
	{
		if (to_find[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i_str;
	int i_to_find;

	i_str = 0;
	i_to_find = 0;
	while (to_find[i_to_find] != '\0')
		i_to_find++;
	if (i_to_find == 0)
		return (str);
	while (str[i_str] != '\0')
	{
		i_to_find = 0;
		if (subcycle(str + i_str, to_find))
			return (str + i_str);
		i_str++;
	}
	return (0);
}
