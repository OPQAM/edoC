/* Escreva uma função que mostre o alfabeto em minúsculo,
 * numa única linha, em ordem crescente, começando pela letra ’a’.*/

#include <unistd.h>

int main() {
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
    return 0;
}
