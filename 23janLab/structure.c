#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[20];
    int marks;
    
};
int main()
{
    int n,i;
    printf("Enter the total no. of student\n");
    scanf("%d\n",&n);
    struct student arr[n];
    for(i=0;i<n;i++)
    {
        arr[i].roll_no = i+1;
        // fgets(arr[i].name, 20 ,stdin);
        scanf("%[^\n]s",&arr[i].name);
        scanf("%d\n",&arr[i].marks);
    }
    for(i=0;i<n;i++)
    {
        printf("Roll No : %d \n",arr[i].roll_no);
        printf("Name : %s\n",arr[i].name);
        printf("Total Marks : %d//500\n",arr[i].marks);
    }
}