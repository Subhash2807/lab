#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,k;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the first matrix\n");
    int arr1[m1][n1];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the order of second matrix\n");
    scanf("%d%d",&m2,&n2);
    int arr2[m2][n2];
    printf("Enter the second matrix\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    if(n1!=m2)
    {
        printf("The multiplication is not possible\n");
    }
    else{
        int arr3[100][100]={0};
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                
                for(k=0;k<n1;k++){
                    arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
                }
            }
        }
        printf("ans\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }

}