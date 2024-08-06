/*Write a c program to check whether a given number is a perfect number or not.
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
Input the number : 6
Expected Output :
The positive divisor : 1 2 3
The sum of the divisor is : 6
So, the number is perfect.*/

//when the number and the sum of the divisior of that number are equal are called perfect no //

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The positive divisior:");
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("%d,",i);
            s=s+i;
        }
    }
    printf("\nThe sum of the divisior is:%d",s);
    if(s==n)
    printf("\nSo the number is perfect");
    else
    printf("\nSo, the number is NOT perfect");
    return 0;
}