/*Write a C program that takes two integer inputs and swaps their values using pointers.*/

#include<stdio.h>
void swap(int *ptr1,int *ptr2);
int main(){
    int n,m;
    printf("Enter both numbers:");
    scanf("%d%d",&n,&m);
    printf("Before swapping:%d,%d",n,m);
    swap(&n,&m);
    printf("\nAfter swapping:%d ,%d",n,m);
}
void swap(int *ptr1,int *ptr2){
    int temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}