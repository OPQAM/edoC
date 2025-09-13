#include <unistd.h>

// Escreva uma função que mostre todos os digitos, numa única linha, em ordem crescente.

void ft_print_numbers(void);

int main(void)
{
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void)
{
   int i = 0;
   char c;

   while(i <= 9)
{
    char c = i + '0';
    write (1, &c, 1);
    i++;
}
write(1, "\n", 1);
}
