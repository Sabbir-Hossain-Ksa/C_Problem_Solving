
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int lowest = INT_MAX, pos = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            pos = i;
        }
    }
    printf("%d %d\n", lowest, pos + 1);

    return 0;
}