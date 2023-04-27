#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char arr[100001];
    fgets(arr, 100001, stdin);
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ',')
        {
            arr[i] = ' ';
        }
        else if (islower(arr[i]))
        {
            arr[i] = toupper(arr[i]);
        }
        else if (isupper(arr[i]))
        {
            arr[i] = tolower(arr[i]);
        }
    }

    printf("%s", arr);
    return 0;
}