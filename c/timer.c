/**
 * A simple Timer program
 * idea: call other program inside our program.
 * int system(const char* cmd) (stdlib.h)
 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	if(argc != 2){
		// incorrect command line
		printf("Usage: timer <program_name>\n");
		return 1;
	}

	// start the clock 
	printf("Starting %s\n", argv[1]);
	clock_t start = clock();

	// start program
	system(argv[1]);

	// program ends and stop clock
	clock_t ends = clock();

	double seconds=(double)(ends=start) / CLOCKS_PER_SEC;
	printf("Running Time : %f\n", seconds);

	return 0;
}
