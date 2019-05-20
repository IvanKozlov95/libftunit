/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 21:37:28 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/19 21:42:57 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*copy;

	copy = malloc(strlen(s1));
	i = 0;
	while ((copy[i] = s1[i]) != 0)
		i++;
	return (copy);
}
