#include <stdio.h>
#define MAXLINE 1000

/* When we declare 'int getline(char line[], int maxline)', the compiler sees a conflict between our prototype and the library’s ssize_t getline(char **lineptr, size_t *n, FILE *stream). Hence we need to create a new name for our function. ie. instead of 'getline' we can call it 'get_line'.
 * Also note that I'm using brackets on while loops. I think it makes the code clearer this way. I could be wrong.*/

int get_line(char line[], int maxline);
void copy(char to[], char from[]);


int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0) { /* Side note: two-stepper here*/
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0') { /*Another two-stepper*/
        ++i;
    }
}
