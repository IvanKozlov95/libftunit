/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 21:34:45 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 21:43:20 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

#include <string.h>

int		strdup_01_basic_test(void)
{
	if (strcmp(ft_strdup("super"), "super") == 0)
		return (0);
	else
		return (-1);
}
