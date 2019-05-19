/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:39:04 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 04:38:20 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test	**testlist, char *name, int (*f) (void))
{
	t_unit_test		*new;
	t_unit_test		*tmp;

	new = ft_memalloc(sizeof(t_unit_test));
	new->name = name;
	new->f = f;
	if (!(*testlist))
		*testlist = new;
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
