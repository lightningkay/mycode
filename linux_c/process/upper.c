#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(toupper(ch));
    return 0;
}
