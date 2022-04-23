
#include <stdio.h>

#define SAMPLE_COUNT 16

int main()
{
	int i;

	for (i=0; i<SAMPLE_COUNT; i++) {
		printf ("%.3d\t", i);
	}
	printf ("\n");
	return 0;
}