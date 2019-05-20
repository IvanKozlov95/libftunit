/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 21:33:32 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 21:58:54 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libunit.h"
#include "libft.h"
#include "tests.h"

int		strdup_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	ft_printf("STRDUP:\n");
	load_test(&test_list, "Basic test", &strdup_01_basic_test);
	return (launch_tests(&test_list));
}
