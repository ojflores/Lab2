#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "lab1.c"

void test_getOpcode()
{
	puts("testing getOpcode(char *x)");
	assert(getOpcode("LDD") == '1');
	assert(getOpcode("ROR") == 'A');
	assert(getOpcode("CAT") == -1);
}

void test_get_line()
{
	puts("testing get_line(char *x)")
	assert(get_line("LDD R8") == "18");
}

int main(void)
{
	test_getOpcode();
	test_get_line();
	puts("testing complete");
	return 0;
}