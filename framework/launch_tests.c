/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:43:21 by julee             #+#    #+#             */
/*   Updated: 2019/05/18 14:46:20 by julee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	new_process(void)
{
	int		pid;
	
	if ((pid = fork()) < 0)
		ft_printf("Failed to fork new process");
	return (pid);
}

static void	execute_test(t_unit_test	*test)
{
	exit((test->f() == OK) ? OK : KO);
}

static void	get_status(int *success)
{
	int		status;

	wait(&status);
	//if normaly exited => true && when normaly exited return value
	if (WIFEXITED(status) && !WEXITSTATUS(status))
		(*success)++;
}

int			launch_tests(t_unit_test	**testlist)
{
	int				success;
	int				total;
	int				pid;
	int				ret;
	t_unit_test		*test;

	success = 0;
	total = 0;
	test = *testlist;
	while (test)
	{
		pid = new_process();
		if ((pid < 0)
			return (KO);
		else if (pid == 0)
			execute_test(test);
		else
			get_status(&success);
		test = test->next;
		total++;
	}
	return ((total == success) ? OK : KO);
}
