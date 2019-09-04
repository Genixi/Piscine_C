/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:08:29 by equiana           #+#    #+#             */
/*   Updated: 2019/07/09 14:27:56 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	*str;
	int		id;

	if (nb == -2147483648)
	{
		id = 0;
		str = "-2147483648";
		while (str[id] != '\0')
		{
			ft_putchar(str[id]);
			id++;
		}
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
