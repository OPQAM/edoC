/*Get input from file*/

#include <stdio.h>


int getc(FILE * stream); // Returns integer (ASCII value)

int main(void) {
    char ch = '\0';
    FILE *fp;

    if (fp = fopen("someFile.c", "rw"))
    {
        ch = getc(fp);

        while (ch != EOF)
        {
            ch = getc(fp);
        }
        fclose(fp);
    }


    return 0;

}
