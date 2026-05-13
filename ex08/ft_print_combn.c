/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:10:56 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/13 17:33:11 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int *tab, int n)
{
	int	i;
	int	is_last;

	is_last = 1;
	i = 0;
	while (i < n)
	{
		if (tab[i] != 9 - n + 1 + i)
			is_last = 0;
		i++;
	}
	if (!is_last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb_recursive(int n, int index, int *tab)
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		ft_display(tab, n);
		return ;
	}
	if (index == 0)
		i = 0;
	else
		i = tab[index - 1] + 1;
	while (i <= 9)
	{
		tab[index] = i;
		ft_print_comb_recursive(n, index + 1, tab);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
	{
		ft_print_comb_recursive(n, 0, tab);
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	ft_putchar('\n');
// 	ft_print_combn(3);
// 	ft_putchar('\n');
// 	return (0);
// }
