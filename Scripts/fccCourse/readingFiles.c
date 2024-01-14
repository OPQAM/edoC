#include <stdio.h>
#include <stdlib.h>


int main(){
	char line[255];
	FILE * fpointer = fopen("employees.txt", "r");
	
	fgets(line, 255, fpointer);  // will read info on file and store it elsewhere (1st line, up to 255
								 // and where to save)
	printf("%s", line);


	fclode(fpointer);
	return 0;
}
