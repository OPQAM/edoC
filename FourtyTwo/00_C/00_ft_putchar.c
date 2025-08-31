/* Escreva uma função que mostre o caractere passado como parâmetro. */


#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    write(1, "\n", 1);
}

int main(char c) {
    ft_putchar('R');
    return 0;
}
