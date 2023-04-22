/**
 * তোমাকে দুইটি ইন্টিজার ভ্যেলু ইনপুট নিতে হবে এবং তাদের যোগফল, বিয়োগফল, গুণফল এবং ভাগফল নীচে দেখানো ফরম্যাট এ দেখাতে হবে।


For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    system("cls");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n",a, b, a + b);
    printf("%d - %d = %d\n",a, b, a - b);
    printf("%d * %d = %d\n",a, b, a * b);
    printf("%d / %d = %.2f\n",a, b, (float)a / b);
    


    return 0;
}