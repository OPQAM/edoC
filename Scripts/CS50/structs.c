#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
	string name;
	string number;
}
person;

int main(void)
{
	person people[2];

	people[0].name = "Ricardo";
	people[0].number = "+351-96-911-47-27";

	people[1].name = "Renata";
	people[1].number = "+351-91-911-12-17";

	string name = get_string("name: ");
	for (int i = 0; i < 2; i++)
	{
		if (strcmp(name[i], name) == 0)
		{
			printf("Found %s\n", number[i]);
			return 0;
		}
	}
	printf("Not found\n");
	return 1;
}
