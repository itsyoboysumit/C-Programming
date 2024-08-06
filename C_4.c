/*Write a program in C to generate all the prime numbers from M to N.(M<N)
Test Data :
Enter M and N: 10 23
Expected Output :
[11] [13] [17] [19] [23].*/

#include<stdio.h>
int main()
{
    int n,i,k,m,c;
    printf("Enter the numbers in between you want prime numbers:");
    scanf("%d%d",&n,&m);
    for (k=n;k<=m;k++)
    {
        c=0;
        for(i=1;i<=m;i++)
        {
            if (k%i==0)
            c++;
        }
        if(c==2)
        printf("[%d]",k);
    }
    return 0;
}