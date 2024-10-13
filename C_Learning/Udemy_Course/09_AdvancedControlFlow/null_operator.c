#include <stdio.h>


int main() {
    
    for ( ;(c = getchar()) != EOF; putchar(c));


    /* As another useful example, remember that unlike Python, C doeesn't care about indentation, so if you want an outer Else, you must make sure that it is interpreted as an outer else:
     *
     *
     * if (condition1)
     *      if (condition2)
     *          do this and that
     *          else ;   // null statement
     *
     *      else 
     *          do something else // we need the above null statement in order for this to be seen as being in its proper place.
     *
     *      ...
     */


}
