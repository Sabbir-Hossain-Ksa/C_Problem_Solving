// Given a lowercase alphabet character. You have to print the next character in the alphabet.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'y')
    {
        ch = ch + 1;
        printf("%c", ch);
    }
    else if (ch == 'z')
    {
        printf("a");
    }

    return 0;
}