/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:27:25 by julee             #+#    #+#             */
/*   Updated: 2019/05/18 14:45:56 by julee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"
# include <sys/wait.h>
# include <signal.h>

# define OK		(0)
# define KO		(-1)
# define SEGV	(11)
# define BUSERR (10)

# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define BLUE	"\033[1;34m"

typedef struct			s_unit_test
{
	char				*name;
	int					(*f) (void);
	struct s_unit_test	*next;
}						t_unit_test;

void					load_test(t_unit_test	**testlist, char *name, int (*f) (void));
int						launch_tests(t_unit_test	**testlist);

#endif
