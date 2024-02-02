#include <stdio.h>
#include <cs50.h>

int main()
{
	bool truthtable[10];

	truthtable[2] = false;
	if (truthtable[7] == true)
	{
		printf("TRUE!\n");
	}
	truthtable[10]= true;

	if (truthtable[10] == true)
	{
		printf("TRUE!\n");
	}
	else
	{
		printf("FALSE!\n");
	}
	
	if (truthtable[11] == true)
	{
		printf("TRUE!\n");
	}
	else if (truthtable[11] == false)
	{
		printf("FALSE!\n");
	}
	else
	{
		printf("OTHER!");
	}


}
