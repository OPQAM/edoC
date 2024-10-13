/*Create K&Rs hello world*/

#include <stdio.h>

int main(void) 
{
    printf("hello, world\n");
}

/*No warnings, both in full pedantic mode and in regular mode*/
/*Without the c99 mode, I get warnings because of the // comments */
/*Also get warnings because a non-void function has no return value, as expected*/