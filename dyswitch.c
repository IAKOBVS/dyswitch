#include <stdio.h>

int main(int argc, char **argv)
{
	if ((argc < 2) | (argc & 1)) {
		puts("Usage: ./program arr_if[0] arr_if[1] arr_then[0] arr_then[1]\narr_if and arr_then shall be of equal length.\n");
		return -1;
	}
	puts("switch (cond) {");
	char **argv2 = ++argv + (argc / 2);
	while (*argv2)
		printf("case %s: var = %s;\n", *argv++, *argv2++);
	puts("}");
	return 0;
}
