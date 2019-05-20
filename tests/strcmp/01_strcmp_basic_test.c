
#include "tests.h"

int strcmp_basic_test(void)
{
    if (ft_strcmp("Hello", "Yello") == strcmp("Hello", "Yello"))
		return (0);
	else
		return (-1);
}