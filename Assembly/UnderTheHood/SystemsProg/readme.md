Sat 10 Feb 11:34:24 WET 2024

Following along materials from Intro to Systems Programming course online

gcc -Wall -Wextra -g -std=c11 bitPatterns.c && ./a.out

Explanation:

-> -Wall           (enable all warnings)
-> -Westra         (enable extra warnings)
-> -g              (debugging)
-> -std=c11        (the C version we're running)
-> bitPatterns.c   (the file we're compiling)
-> ./a.out         (run the resulting file)

We could, instead already define the program's name and run that:

gcc -Wall -Wextra -g -std=c11 bitPatterns.c -o bitPatterns && ./bitPatterns


