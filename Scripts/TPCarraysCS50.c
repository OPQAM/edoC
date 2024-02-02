#include <stdio.h>
#include <cs50.h>

// What will this print? Think about it and answer.
void set_array(int array[4]);
void set_int(int x);



int main(void) 
{
	int a = 10;
	int b[4] = {0, 1 ,2, 3};
	set_int(a);            // this isn't really changing a, so it remains 10
	set_array(b);
	printf("%d %d\n", a, b[0]);
}

void set_array(int array[4])
{
	array[0] = 22;
}

void set_int(int x)
{
	x = 22;
}






