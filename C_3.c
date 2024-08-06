/*Write a program in C to take a number and check whether it is Prime or not.*/
#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        c++;
    }
    if (c==2)
    printf("%d is PRIME\n",n);
    else
    printf("%d is NOT PRIME",n);
    return 0;
}