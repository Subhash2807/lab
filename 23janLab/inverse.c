#include<stdio.h>
#define N 100

int new_ma(int arr[N][N], int i,int n){
    int arr2[N][N];
    int j,k,s=0,t=0;
    for(j=1;j<n;j++){
        for(k=0;k<n;k++){
            if(k!=i){
                arr2[s][t]=arr[j][k];
                t++;
            }
        }
        t=0;
        s++;
    }
    return dete(arr2[N][N],n-1);

}


int dete(int arr[N][N], int n){
    if(n==1)
    return arr[0][0];
    int i;
    int det=0;
    for(int i=0;i<n;i++)
    {
        det = det + arr[0][i]*new_ma(arr,i,n);
    }
    return det;
}

void inverse(int arr[N][N], int n)
{
    int det = dete(arr,n);
    printf("%d",det);
    
}


int main()
{
    int n,i,j;
    scanf("%d",&n);

    int arr[N][N];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    inverse(arr,n);
    

}