#include <stdio.h>

//9. Write a C program to find the largest of 3 numbers

/*
1. Start
2. Read the three numbers to be compared, as A, B and C.
3. Check if A is greater than B.

  3.1 If true, then check if A is greater than C.
    3.1.1 If true, print 'A' as the greatest number.
    3.1.2 If false, print 'C' as the greatest number.

  3.2 If false, then check if B is greater than C.
    3.1.1 If true, print 'B' as the greatest number.
    3.1.2 If false, print 'C' as the greatest number.
4. End
*/
int main()
{
    int A, B, C;

    printf("Enter the numbers A, B and C:\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
        printf("%d is the largest number.\n\n", A);

    if (B >= A && B >= C)
        printf("%d is the largest number.\n\n", B);

    if (C >= A && C >= B)
        printf("%d is the largest number.\n\n", C);

    return 0;
}
