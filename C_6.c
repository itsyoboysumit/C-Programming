/*Write a program in C to take a number & find its factorial.
Test Data :
Enter a number: 5
Expected Output :
Factorial of 5 is =120*/

#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        s=s*i;
    }
    printf("Factorial of %d is:%d",n,s);
    return 0;
}