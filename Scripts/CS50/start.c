#include <stdio.h>
#include <cs50.h>

int main(void){
	printf("Hello, world! Enter text: \n");
	string s = get_string("Boop");

	if (s == NULL) {
		return 1
	}

	string next = get_string("You entered %s. Enter a new string: ", s);

}
