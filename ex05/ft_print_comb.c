/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:34:32 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/13 17:03:50 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	digit;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				digit = a + '0';
				write(1, &digit, 1);
				digit = b + '0';
				write(1, &digit, 1);
				digit = c + '0';
				write(1, &digit, 1);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
			}
		}
	}
}

// void	ft_print_comb(void);

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
