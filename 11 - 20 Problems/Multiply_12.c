// You will be given two integers A and B. You need to give output their multiplication.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    long long int a, b, mult;
    scanf("%lld %lld", &a, &b);
    mult = a * b;
    printf("%lld\n", mult);

    return 0;
}