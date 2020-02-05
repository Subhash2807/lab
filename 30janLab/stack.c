#include<stdio.h>
int arr[10];
int top = -1;
void push(int a){
    
    top++;
    if(top>=10){
        printf("overflow\n");
        top--;
    }
    else{
        
        arr[top]=a;
        printf("%d is pushed\n",arr[top]);
    }

}
void pop(){
    top--;
    if(top<-1){
        printf("underflow\n");
        top++;
        }
        else{
            printf("%d is popped\n",arr[top+1]);
        }

    }
void display(){
    int i;
    printf("Element in the stack are:\n");
    for(i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void main()
{
    int a,b,flag=0;
    printf("1:push()\n2:pop()\n3:display()\n");

    while(flag==0)
    {

        scanf("%d",&a);
        switch(a)
        {
            case 1:printf("Enter the element to be pushed\n");
                    scanf("%d",&b);
                    push(b);
                    break;

            case 2:pop();break;

            case 3:display();break;
            case 4:flag=1;break;

        }
    }
    
}