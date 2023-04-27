// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int size;
    scanf("%d", &size);
    int nums[size];
    int i;
    long long int sum;
    ;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    sum = 0;
    for (i = 0; i < size; i++)
    {
       sum += nums[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
    }
    printf("%lld", sum);

    return 0;
}