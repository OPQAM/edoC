#include <stdio.h>

int main(int argc, char *argv[]) {                                    // (1)
	printf("Wake up, %s.\n", argv[1]);                            // (2)

	printf("%d Command Line Argument(s):\n", argc-1);             // (3)
	if (argc == 1)                                                // (4)
	{
		printf("0 additional arguments provided\n");
	}	
	else
	{
		printf("Default Argument [0]: %s\n", argv[0]);
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
// (2) If we, for example, run this program as 'programName $USER' we will
// get 'Wake up, root' (if the user is root). Arg[1] and not [0], because
// [0] is the default position, or the name of the file itself(!)
//
// (3) Printing the number of command line arguments
//
// (4) If there is exactly one command line argument (i.e if
// there was no extra arguments when running the program...)
