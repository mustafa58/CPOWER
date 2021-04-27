#include <stdio.h>
#include <stdlib.h>
#include "power.h"

int main( int argc, char *argv[] ) {
	int N = atoi(argv[1]);
	int p = atoi(argv[2]);
	printf("%d ^ %d = %f\n", N,p,power(N, p));
	return 0;
}
