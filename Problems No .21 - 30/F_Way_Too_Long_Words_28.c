//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        if (len <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
    }
    return 0;
}
