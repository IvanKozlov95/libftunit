/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcmp_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 20:17:41 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 21:02:41 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#include <string.h>
#include <stdio.h>

int strcmp_basic_test(void)
{
	int		user;
	int		system;

	user = ft_strcmp("Hello", "Yellow");
	if (user != 0)
		user = user > 0 ? 1 : -1;
	system = strcmp("Hello", "Yellow");
	printf("%d %d\n", user, system);
	if (system == user)
		return (0);
	else
		return (-1);
}