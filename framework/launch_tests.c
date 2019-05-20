/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:43:21 by julee             #+#    #+#             */
/*   Updated: 2019/05/19 22:15:51 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "colors.h"

static int	new_process(void)
{
	int		pid;

	if ((pid = fork()) < 0)
		ft_printf("Failed to fork new process");
	return (pid);
}

static void	execute_test(t_unit_test *test)
{
	exit((test->f() == OK) ? OK : KO);
}

static int	get_status(int *success)
{
	int		status;

	wait(&status);
	if (WIFEXITED(status) && !WEXITSTATUS(status))
		(*success)++;
	return (status);
}

static void	print_test_result(t_unit_test *t, int status)
{
	static char		*statuses[] = {
		"KO", "OK", 0, 0, 0, 0, 0, 0, 0, 0, 0,
		"BUS ERROR", "SEGV",
	};
	char			**status_ok;
	char			*color;
	char			*status_message;

	status_ok = statuses + 1;
	color = status == OK ? GRN : RED;
	if (status == NEG_VAL)
		status = KO;
	if (KO <= status && status <= SEGV)
		status_message = *(status_ok + status);
	else
		status_message = "CRASH";
	ft_printf("> %s : %s%s%s\n", t->name, color, status_message, RESET);
}

int			launch_tests(t_unit_test **testlist)
{
	int				success;
	int				total;
	int				pid;
	int				status;
	t_unit_test		*test;

	success = 0;
	total = 0;
	test = *testlist;
	while (test)
	{
		pid = new_process();
		if ((pid < 0))
			return (KO);
		else if (pid == 0)
			execute_test(test);
		else
		{
			status = get_status(&success);
			print_test_result(test, status);
		}
		test = test->next;
		total++;
	}
	return ((total == success) ? OK : KO);
}
