#include<iostream>
#include<string.h>
using namespace std;
char arr[100][100];
char oper[6]={'+','-','*','/','(',')'};
int top=-1;
void push(string str)
{
    top++;
    if(top>=100)
    {
        printf("Overflow\n");
        top--;
    }
    else{
        int i=0;
        while(str[i]!='\0')
        {
            arr[top][i]=str[i];
            i++;
        }
        arr[top][i]='\0';
        // cout<<str<<": is pushed"<<endl;
    

    }
}
void pop()
{
    top--;
    if(top<-1)
    {
        cout<<"Underflow"<<endl;
        top++;
    }
    // else cout<<arr[top+1]<<": is poped"<<endl;
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<endl;
    }
}
string topS()
{
    return arr[top];
}
string getString(char a)
{
    char st[2];
    st[0]=a;
    st[1]='\0';
    return st;
}
string getString1(string s2, string s1,char a)
{
    char s[100];
    s[0]='(';
    int i=1,j=0;
    while(s1[j]!='\0')
    {
        s[i]=s1[j];
        i++;j++;
    }
    j=0;
    s[i]=a;
    i++;
        while(s2[j]!='\0')
    {
        s[i]=s2[j];
        i++;j++;
    }
    s[i]=')';
    i++;
    s[i]='\0';
    return s;

}

int main()
{
    int j;
    string str;
    cin>>str;
    int x = str.length();
    for(int i=0;i<x;i++)
    {
        for(j=0;j<6;j++)
        {
            if(str[i]==oper[j])
                break;
        }
                // cout<<j<<endl;
        if(j==6)
        {
                push(getString(str[i]));

        }
        else
        {
            string s1 = topS();
            pop();
            string s2 = topS();
            pop();
            push(getString1(s1,s2,str[i]));
        }
        
    }
    printf("%s\n",arr[top]);
    
    
    
}