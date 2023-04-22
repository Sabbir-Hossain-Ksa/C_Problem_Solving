/**
 * Problem Statement

You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

Input Format

First line will contain A
Second line will contain B
Third line will contain C
Fourth line will contain D
Constraints

-10^9 <= A <= 10^9
-10^18 <= B <= 10^18
-10^9 <= C <= 10^9
Output Format

Output them serially and put a new line after each value. Output the floating value 2 points after decimal.
Sample Input 0

100
1234567891234567
23.5675
A
Sample Output 0

100
1234567891234567
23.57
A
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a;
    long long d;
    float b;
    char ch;

    scanf("%d", &a);
    scanf("%lld", &d);
    scanf("%f", &b);
    scanf(" %c", &ch);

    printf("%d\n", a);
    printf("%lld\n", d);
    printf("%.4f\n", b);
    printf("%c\n", ch);

    return 0;
}