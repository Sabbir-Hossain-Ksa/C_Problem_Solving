/**
 * You need to take an integer value as input and tell if it is positive or negative or zero.
Check the inputs and outputs given below for further understanding.

Sample Input
Sample Output

10
positive

-50
negative

0
zero

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }

    return 0;
}