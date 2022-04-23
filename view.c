
#include <stdio.h>

#define SAMPLE_COUNT 16

int main()
{
	int i;

	for (i=0; i<SAMPLE_COUNT; i++) {
		print ("%.3d\t", i);
	}
	print ("\n");
	return 0
}