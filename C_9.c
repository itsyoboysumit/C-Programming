/*Write a program in C to take a number & find all its PRIME FACTORS.
Test Data :
Enter a number: 36
Expected Output :
All Factors of 36 are =[2] [3][4] [6][9][12][18]
Prime Factors of 36 are =[2] [3]*/

#include <stdio.h>

int main() {
    int num, i, j,p;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\nPrime factors: ");//using the same loop twice bcz we want to print factors and prime factors in two different line//
    for (i = 1; i <= num; i++) { //first loop is used to find factors//
        if (num % i == 0) {
            p=0;
            for (j = 1; j <= i ; j++) { //second loop is used to find out prime no among the factors//
                if (i % j == 0) {
                    p++;
                }
            }
            if (p==2) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}

