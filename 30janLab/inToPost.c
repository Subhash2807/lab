#include<stdio.h>
#include<string.h>
#define max 100
char oper[6]={'+','-','*','/','(',')'};
char arr[max];
int top = -1;
void push(char a){
    
    top++;
    if(top>=max){
        printf("overflow\n");
        top--;
    }
    else{
        arr[top]=a;
    }
}
void pop(){
    top--;
    if(top<-1){
        printf("underflow\n");
        top++;
        }
    }
int precedence(char a,char b){
    int x,y,i;
    for(i=0;i<6;i++)
    {
        if(a==oper[i])
        {
            x=i;
        }
        if(b==oper[i])
        {
            y=i;
        }
       
    }
    //  printf("%d\n%d\n",x,y);
     x = x/2;
        y = y/2;
        if(a=='(')
        return 1;
        else if(a==')')
        return 0;
        else if(x==y){
            return 2;
        }
        else if(x>y)
        return 1;
        else
        return 0;}

int main()
{
    char str[100];
    scanf("%s",&str);
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<6;j++)
        {
            if(str[i]==oper[j])
            break;
        }
        if(j!=6){
            if(top==-1)
            {
                push(str[i]);
            }
            else
            {
                int index = precedence(str[i],arr[top]);
                if(index==1)
                {
                    push(str[i]);
                }
                else if(index == 0)
                {
                    while(top>=0 && arr[top+1]!='('){
                        if(arr[top]!='(' && arr[top]!=')')
                        printf("%c",arr[top]);
                        pop();
                    }
                    push(str[i]);
                }
                else if(index==2)
                {
                    if(arr[top]!='(' && arr[top]!=')')
                    printf("%c",arr[top]);
                    pop();
                    push(str[i]);
                }
            }
        }
        else
        {
            printf("%c",str[i]);
        }
    }
      while(top>=0 )
        {
        if(arr[top]!='(' && arr[top]!=')')
        printf("%c",arr[top]);
        pop();
        }
    return 0;
}