#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the no. of total entries");
    scanf("%d ",&n);
    char prefix[2][5] ={"Mrs.","Ms."};
    char name[n][20];
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]s",name[i]);
    }
    for(i=0;i<n;i++)
    {
        char fm[5];
        for(j=0;(int)(name[i][j])!=32;j++){
            fm[j]=name[i][j];
        }
        fm[j]='\0';
        
        if(strcmp(fm,prefix[0])==0 || strcmp(fm,prefix[1])==0){
            count++;
            
        }
        printf("%s\n",fm);


    }
    
    printf("%d",count);
    return 0;

    
}