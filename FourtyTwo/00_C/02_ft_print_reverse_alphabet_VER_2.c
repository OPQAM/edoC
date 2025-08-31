/* Escreva uma função que mostre o alfabeto em minúsculo, numa única linha, em ordem decrescente, começando pela letra ’z’. */

/* Using the ASCII table directly */

#include <unistd.h>
#define ALPHABRUTE 25 /* 'z' is 25 characters away from 'a' */

int main(void) 
{
    char c;
    int i = ALPHABRUTE;

    while (i >= 0) {
        c = 'a' + i;
        write(1, &c, 1);
        --i;
    }
    write(1, "\n", 1);
    return 0;
}
