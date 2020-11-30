
#include "get_next_line.h"
// #include <stdio.h>

int main(void)
{
    char    *line;
    int     fd = open("example.txt", O_RDONLY);
    int     n;
    while ((n = get_next_line(fd, &line)) > 0)
    {
        printf("line : %s\n", line);
        printf("n : %d\n", n);
        free(line);
    }
    printf("line : %s\n", line);
    printf("n : %d\n", n);
    free(line);
}
