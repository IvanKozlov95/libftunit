/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcmp_empty_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:16:54 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 22:22:07 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strcmp_empty_test(void)
{
	if (ft_strcmp("", "hello") < 0)
		return (0);
	else
		return (-1);
}
