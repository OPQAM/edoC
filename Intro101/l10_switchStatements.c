#include <stdio.h>

int main(void){

	int dayOfWeek = 0;

	while(1){
		printf("Enter a number for the day of the week: ");
		scanf("%d", &dayOfWeek);
		if ((dayOfWeek >= 1) && (dayOfWeek <= 7)){
			break;
		} else {
			printf("Please pick a number between 1 and 7.\n");
		}
	}
	switch(dayOfWeek){
		case 1:
			printf("Monday\n");
			break;	
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		// default:
		// 	printf("Invalid input.");
		// 	break
		//
		// 	-> Note that this is irrelevant, since I added the while at the beginning
	}
}
