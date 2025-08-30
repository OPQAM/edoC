#include <stdio.h>
#define MAXLINE 1000

int get_string(char line[], int maxline);
int reverse_line(char line[], char reversed[], int len);

int main(void)
{
    int len;
    char line[MAXLINE];
    char reversed[MAXLINE];


    while ((len = get_string(line, MAXLINE)) >0) {
        reverse_line(line, reversed, len);

        printf("%s\n", reversed);
    }
    return 0;
}

/* Get user's string & return size of string */
int get_string(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    s[i] = '\0';  /* to get a proper C string */
    return i;
}

/* Reverse the original string */
int reverse_line(char original[], char reversed[], int len)
{
    int c, i;

    for (i = 0; i < len; ++i) {
        reversed[i] = original[len-1 - i];
    }
    reversed[i] = '\0';
    return 0;
}
