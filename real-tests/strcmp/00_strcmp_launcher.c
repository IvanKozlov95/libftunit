/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:18:32 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 22:23:05 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"
#include "libunit.h"

int		strcmp_launcher(void)
{
	t_unit_test	*testlist;

	puts("STRCMP:");
	testlist = NULL;
	load_test(&testlist, "Basic test", &strcmp_basic_test);
	load_test(&testlist, "Empty string test", &strcmp_empty_test);
	return (launch_tests(&testlist));
}
