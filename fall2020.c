#include<stdio.h>
#include<stdbool.h>
/*int main()
{
    int i=1;
    while(i>=1)
    {
        printf("%d\n", i++);
        if(i>10)
            break;
    }
    return 0;
}*/
/*
int main()
{
    for(int i = 1; i<=5; i++)
    {
        for(int s = 1; s<=5-i; s++)
        {
            printf(" ");
        }
        for(int j = i; j>0; j--)
        {
            printf("*");
        }
        for(int r = 2; r<=i; r++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
/*int main()
{
    float arr[5] = {23.4, 34, 12, 15.5, 0};
    float max = 0;

    for(int i=0; i<5; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    printf("%.0f", max);


}*/
/*
int main()
{
    int twoDee[3][3] = { {12, 6, 5},
                         { 4, 99, 1},
                         {73, 72, 4}
                       } ;
    int sum = 0;

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            //i)
            if(twoDee[i][j] == 99)
                twoDee[i][j] = 100;

            //ii)
            sum += twoDee[i][j];

            //printf("%d ", twoDee[i][j]);
        }
    }

    printf("sum is %d ", sum);
}*/


int main()
{
 int a[5] = {5, 1, 15, 20, 25};
 int i, j, m;

 i = ++a[1]; //2
 j = a[1]++; //2
 m = a[i++];

 printf("%d, %d, %d", i, j, m);
 return 0;
}
/*
int reverse(int no);
int main()
{
 int no=5;
 reverse(no);
 return 0;
}
int reverse(int no)
{
    //printf("%d,", no);
 if(no == 0)
 return 0;
 else
    printf("%d,", no);
 reverse (no--);
 //printf("%d,", no);
}*/
/*
int main() {
/*    int a, b;
    printf("Enter the value of a and b :") ;
    scanf("%i, %f", &a, &b );
    int c = a+b ;
    printf("The sum is : c") ;

    int n = 10;
    int* p = &n;

    printf("%d\n", &n) ;
    printf("%d", *p) ;

    return 0;
}
*/

