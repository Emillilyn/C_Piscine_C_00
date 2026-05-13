/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:21:04 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/13 15:31:44 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
// void	ft_is_negative(int n);

// int	main(void)
// {
// 	ft_is_negative(-5);
// 	ft_is_negative(0);
// 	ft_is_negative(42);
// 	return (0);
// }
