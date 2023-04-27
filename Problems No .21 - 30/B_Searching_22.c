// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
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
    }
    int x;
    scanf("%d", &x);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);

    return 0;
}