/*Write a program in C to take a number & find all the factors of it.
Test Data :
Enter a number: 16
Expected Output :
Factors of 16 are =[1][2][4][8][16]*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factor of %d is:",n);
    for(i=1;i<=n;i++){
        if(n%i==0)
        printf("%d,",i);
    }
    return 0;
}