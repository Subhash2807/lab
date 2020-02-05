#include<stdio.h>
void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int n,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}