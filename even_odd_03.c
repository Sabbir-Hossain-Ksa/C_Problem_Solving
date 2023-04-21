/**
 * তোমাকে একটি অঋণাত্মক (০ বা এর থেকে বড়) সংখ্যা নিতে হবে এবং বলতে হবে সংখ্যাটি জোড়(even) নাকি বিজোড়(odd)।
আরও বোঝার জন্য নীচে দেওয়া ইনপুট এবং আউটপুট গুলো খেয়াল করো।

Sample Input       Sample  Output

        10                 even

        3                  odd

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    system("cls");
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}