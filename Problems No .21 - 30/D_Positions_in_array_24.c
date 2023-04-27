// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] <= 10)
        {
            printf("A[%d] = %d\n", i, array[i]);
        }
    }

    return 0;
}