/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 21:27:37 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/27 21:28:08 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}

	return (0);
}
