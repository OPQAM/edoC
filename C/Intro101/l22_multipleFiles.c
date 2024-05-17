#include <stdio.h>
#include "funct_sum.h"

int main(void) {
	int sum = funct_sum(2,3);
	printf("%d\n", sum);       // This function exists in another file
				   // Best practices dictate that we should use a header file
	return 0;
}

// NOTE
// In gcc, we need to add the three files we've created, the l22_multipleFiles.c, the funct_sum.c and the funct_sum.h, like so:
//
// gcc funct_sum.c funct_sum.h l22_multipleFiles.c -o myBinary
// So, I basically include all the files and state that myBinary will be my output file
// Also:
// In C, when declaring functions in a header file, we typically only specify the function signature, including the function name, return type, and parameter types. We don't include parameter names because they are not necessary for the function declaration.
// Another note.. we apparently use "funct_sum.h" instead of <> so that our compiler searches for the header files locally first.
