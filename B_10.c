/*Write a C program to check whether a triangle can be formed by the given value for the
angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid*/

#include <stdio.h>
int main()
{
    int a,b,c,s=0;
    printf("Enter angles of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    if(s==180)
    printf("Triangle is valid");
    else
    printf("Thr triangle is not valid");
    return 0;
}