#include<stdio.h>
#define N 5

int main(void){
	
	// In C we can use the macro 'define' to store variables for later use.
	// So, in this case, we've just set N = 5, and we can use that instead of the value. ie:
	
	// Note that these Macros are handled by the preprocessor and not the compiler. Thus, this happens before the compilation case.
	//
	// Macros are essentially text substitutions.
	// Variables are compiled and occupy memory space, thus having a runtime overhead.
	//
	// Since Macros are replaced directly in the code, they can potentially lead to faster execution (negligible for small constants).
	//
	// Note, though, that Macros are not scoped, and will be used in all the code, replacing values.
	//
	// Variables can have a global scope but also block scopes. So, it's easier to maintain and uphold a more readable and (type) safe code using variables - as with everything else, it's a tradeoff.

	int a[N] = {1,2,3,4,5};

	printf("%d\n", a[3]);

	return 0;

}

