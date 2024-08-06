/*Write a program in C to display the multipliaction table vertically from 1 to n.
Test Data :
Input upto the table number starting from 1 : 6
Expected Output :
Multiplication table from 1 to 6
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6
……………
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60*/
#include<stdio.h>
int main()
{
    int n,i,m=1,j;
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++){
            m=i*j;
            printf("%d*%d=%d, ",i,j,m);
        }
        printf("\n");
    }
    return 0;
}