//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, min, max;
    scanf("%d", &n);
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            min = max = 0;
        }
        else
        {
            if (arr[i] < arr[min])
            {
                min = i;
            }
            if (arr[i] > arr[max])
            {
                max = i;
            }
        }
    }

    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}