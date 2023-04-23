/**
 * A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    x = n / 10;
    y = n % 10;

    if (y == 0 || x % y == 0 || y % x == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;

    return 0;
}