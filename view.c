
#include <stdio.h>

#define SAMPLE_COUNT 16

int main()
{
	int i;

	printf ("[view.c]");
	for (i=0; i<SAMPLE_COUNT; i++) {
		if (i % 8 == 0)
			printf ("\n");
		printf ("%d\t", i);
	}
	printf ("\n");
	return 0;
}