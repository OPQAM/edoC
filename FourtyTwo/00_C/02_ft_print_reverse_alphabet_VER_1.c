/* Escreva uma função que mostre o alfabeto em minúsculo, numa única linha, em ordem decrescente, começando pela letra ’z’. */
/* the hard, slash, dumb way */
#include <unistd.h>
#define DICTSIZE 27

int reverser(char alphabrute[], int len);

int main(void) 
{
    char alphabrute[] = "abcdefghijklmnopqrstuvwxyz";
    int len = DICTSIZE - 2;

    reverser(alphabrute, len);

    return 0;
}

int reverser(char alphabrute[], int len)
{
    int i = len;
    
    while (i >= 0) {
        write(1, &alphabrute[i], 1);
        --i;
    }
    write(1, "\n",1);
    return 0;
}
