#include<iostream>
using namespace std;
int main()
{
    char ch ='a';
    char* c = &ch;
    for (int i = 0; i < 26; i++)
    {
          cout<<(char)(*(c) + i)<<" ";
    }
    
}