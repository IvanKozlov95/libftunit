/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:22:38 by julee             #+#    #+#             */
/*   Updated: 2019/05/18 14:22:41 by julee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	return (launch_tests(&testlist));
}
