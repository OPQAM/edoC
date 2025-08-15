#include <stdio.h>

int main(void)

{
    printf("Hello, world!\n");
    return 0;
}

/* Notes:
 *
 * On the original book version, functions would implicitly default to int. This doesn't happen nowadays and will give us at best a warning and, at worst, an error.
 * Therefore, in order to avoid any issues, I've added 'int main(void)' and 'return 0' in 'main'. Void is defining the return type and expecting no arguments, and return 0 is an indicator of a successful execution.
 *
 * Also note that 'return 0' isn't absolutely necessary for main, since that function implicitly adds return 0 at its end if none is added. This hasbeen so ever since C99.
 * /
