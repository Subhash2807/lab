#include<stdio.h>
void swap(int *a, int *b)
{
    int t= *a;
    *a= *b;
    *b =t;
}
int part(int arr[],int low, int high){
    int pivot = arr[high];
    int j;
    int i=(low-1);
    for(j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
        
    }
        swap(&arr[i+1],&arr[high]);
        return (i+1);
}
void quick(int arr[],int low,int high){
   if(low < high){
       int pivot = part(arr,low,high);
       quick(arr,low,pivot-1);
       quick(arr,pivot+1,high);
   }
    
    
    
}

int main()
{
    int n,i,random;
    printf("Enter the total no. of array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index of random variable");
    scanf("%d",&random);
    swap(&arr[random-1],&arr[n-1]);
    int low =0;
    int high = n-1;
    quick(arr,low,high);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    
}