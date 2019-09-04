/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:12:42 by equiana           #+#    #+#             */
/*   Updated: 2019/07/09 21:32:00 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int id;

	id = 0;
	while (str[id] != '\0')
	{
		ft_putchar(str[id]);
		id++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_output(int size, char **p)
{
	int i;

	i = 1;
	while (i < size)
	{
		ft_putstr(p[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		min;
	char	*temp;

	if (argc == 1)
		return (0);
	j = 1;
	while (j < argc - 1)
	{
		min = j;
		i = j + 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[min], argv[i]) > 0)
				min = i;
			i++;
		}
		temp = argv[j];
		argv[j] = argv[min];
		argv[min] = temp;
		j++;
	}
	ft_output(argc, argv);
	return (0);
}
