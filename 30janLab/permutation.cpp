#include<iostream>
#include<string>
using namespace std;
void recursion(string str,int j,int t)
{
    if(j==t-1)
    cout<<str<<endl;
    else{
    for(int i=j;i<t;i++)
    {
        swap(str[j],str[i]);
        recursion(str,j+1,t);
        swap(str[j],str[i]);
    }
    }

}
void swap(char *a,char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}


int main()
{
    int t;
    string str;
    cin>>str;
    t= str.size();
    recursion(str,0,t);
}