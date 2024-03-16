#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char filename1[100];
	char filename2[100];
	FILE *file1 = NULL;
	FILE *file2 = NULL;

	//user choice
	char choice;
	// characters that will be printed
	int c;

	printf("Please select the file you'd like to copy from:\n");
	scanf(" %s", &filename1);

	//Opening up the file for reading
	file1 = fopen(filename1, "r");

	if (file1 == NULL) {
		printf("I'm sorry, but that's not a valid file.\n");
		return 1;
	}
	
	printf("Do you want to (w)rite over, or to (a)ppend onto the file?\n");
	scanf(" %c", &choice);

	if (choice == 'w') {
	
		printf("What file do you want to write into?\n");
		scanf(" %s", &filename2);
	
		//Opening up the file for writing
		file2 = fopen(filename2, "w");
		
		if (file2==NULL) {
		printf("I'm sorry, but that's not a valid file.\n");
		return 1;
	}

	} else if (choice == 'a') {
		printf("What file do you want to append to?\n");
		scanf(" %s", &filename2);
	
		//Opening up the file for appending
		*file2 = fopen(filename2, "a");
		
		if (file2==NULL) {
		printf("I'm sorry, but that's not a valid file.\n");
		return 1;
		}
	
	} else {
		printf("I'm sorry, but that's not a valid choice.\n");
		return 1;
	}
	
	// The files are now open for reading/writing. We now need to write
	while ((c = fgetc(file1)) != EOF) {
		fputc(c, file2);
	}

	fclose(file1);
	fclose(file2);
	
	return 0;
}
