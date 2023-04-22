/**
 * Suppose a friend of yours tells you that he would buy a Gucci bag if he had Rs 10,000 or more. Otherwise if he has 5000 or more then he will buy Levis Bag. Otherwise he will buy something from New Market. He also told you that if he can buy a Gucci Bag and if he has more than 20 thousand rupees then he will buy another Gucci Belt.
Now suppose you know how much money your friend has, can you tell what things he will buy?
Check the inputs and outputs given below for further understanding.

Sample Input
Sample Output

20000
Gucci Bag

6500
Levis Bag

200
Something

25400
Gucci Bag
Gucci Belt

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

    if (n > 10000)
    {
        printf("Gucci Bag\n");
        if (n > 20000)
        {
            printf("Levis Belt\n");
        }
    }
    else if (n > 5000)
    {
        printf("Levis Bag\n");
    }
    else
    {
        printf("Something\n");
    }

    return 0;
}