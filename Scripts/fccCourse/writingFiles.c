#include <stdio.h>
#include <stdlib.h>


// FILE CREATION

int main(){

	FILE * fpointer = fopen("./PROJECTS/employees.txt", "w"); // creates our file
	// most common file mods: r, w, a (read, write, append)

	fprintf(fpointer, "John, Salesman\nPam, Receptionist\nMike, Accounting");  // write info to a file



	fclose(fpointer); // close our file

	return 0;
}
