/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 02:04:25 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 21:43:02 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stddef.h>

size_t	ft_strlen(const char *s);
int		strlen_launcher(void);
int		basic_test(void);
int		null_test(void);

int		ft_strcmp(const char *s1, const char *s2);
int		strcmp_launcher(void);
int		strcmp_basic_test(void);
int		strcmp_empty_test(void);

char	*ft_strdup(const char *s1);
int		strdup_launcher(void);
int		strdup_01_basic_test(void);

#endif
