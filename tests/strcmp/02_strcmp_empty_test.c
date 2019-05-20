
#include "tests.h"
#include <string.h>

int	strcmp_empty_test(void)
{
	if (ft_strcmp("", "hello") < 0) 
	    return (0);
    else
        return (-1);
}