qua 12 jun 2024 13:01:19 WEST


Just a place to keep all random stuff I want to test and am not ready yet to delete.

gcc -Wall -Wextra -pedantic (-Werror) script.c -o final_program

(all warnings added)

-Wall: Enables all the standard warnings.

-Wextra: Enables extra warnings that are not included in -Wall.

-pedantic: Enforces strict ISO C compliance, which helps to catch non-standard code.

extra:

-Werror: Treats all warnings as errors, forcing you to fix them before the code can compile.


NOTE:

"It doesn't, it just happens to be zero in your case...
...
Memory coming from the OS will be zeroed for security reasons.*

When the OS gives you memory, it could have been freed from a different process. So that memory could contain sensitive information such as a password. So to prevent you reading such data, the OS will zero it before it gives it to you."

From stack overflow (why does malloc initialize the values to 0 in gcc?)
