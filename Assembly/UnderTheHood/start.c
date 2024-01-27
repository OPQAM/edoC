#include <stdio.h>

int main(int argc, char *argv[]) {                      // (1)
	printf("Wake up, Neo.\n");

	printf("CL-Arguments: %d\n", argc);             // (2)
	if (argc == 1)                                  // (3)
	{
		printf("0 additional arguments provided\n");
	}	
	else
	{
		printf("Arguments provided: %d\n", argc-1);
		for (int i = 1; i < argc; i++) {
			printf("Argument %d: %s\n", i, argv[i]);
		}
	}

	return 0;
}

// NOTES:
//
// (1) argc -> argument count, or the number of arguments that
// were entered when calling the program (DEFAULT == 1)
//
// (2) Printing the number of command line arguments
//
// (3) If there is exactly one command line argument (i.e if
// there was no extra arguments when running the program...)
