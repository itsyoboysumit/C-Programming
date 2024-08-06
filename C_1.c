/*Write a program in C to take 10 numbers as input and display how many of them are Odd
number and Even number.
Test Data :
10 11 75 89 56 44 22 77 55 65
Expected Output :
Total number of “ODD” numbers: 6
Total number of “EVEN” numbers:4
Test Data :
10 20 30 41 50 51 60 6 8 10
Expected Output :
Total number of “ODD” numbers: 2
Total number of “EVEN” numbers:8*/
#include<stdio.h>
int main()
{
    int i,n,c=0,d=0;
    printf("Enter 10 digits:");
    for(i=1;i<=10;i++)
    {
       scanf("%d",&n);
       if (n%2==0)
        c++;
       else
       d++;
    }
    printf("\nTotal number of OOD numbers:\t%d",d);
    printf("\nTotal numbers of EVEN numbers:\t%d",c);
    return 0;
}