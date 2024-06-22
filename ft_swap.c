/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakgul <nakgul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:04:08 by nakgul            #+#    #+#             */
/*   Updated: 2023/09/04 16:16:20 by nakgul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int	*a,	int	*b)

{
	int		n;

	n = *a;
	*a = *b;
	*b = n;
}
