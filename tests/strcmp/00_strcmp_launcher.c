
#include "tests.h"
#include "libunit.h"

int strcmp_launcher(void)
{
    t_unit_test	*testlist;

	puts("STRCMP:");
	load_test(&testlist, "Basic test", &strcmp_basic_test);
	load_test(&testlist, "Empty string test", &strcmp_empty_test);
	return (launch_tests(&testlist));
}