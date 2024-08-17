/*Find min and max of array using pointers.*/
#include<stdio.h>

void minMax(int arr[],int n,int *min, int *max);

int main(){
    int n;
    int min,max;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element:");
    for (int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    minMax(arr,n,&min,&max);
    printf("Maximun element in the array is:%d \nMinimum element of the array is:%d",max,min);
    return 0;
}
void minMax(int arr[],int n, int *min, int *max){
    *min=*max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<*min){
            *min=arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }

}