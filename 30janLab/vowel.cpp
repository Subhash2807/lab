#include<iostream>
using namespace std;
char vowel[5]={'a','e','i','o','u'};
char constant[100];
char vow[100];
int c =0;
int v=0;
int arr[126]={0};

void part(char *str)
{
    while(*str!='\0')
    {
        int i;
        for(i=0;i<5;i++)
        {
            if(*str==vowel[i] || *str==(char)(vowel[i]-32))
            {
                v++;
                break;
            }
            
        }
        if(i==5)
        c++;
        str++;
    }
    cout<<"No. of constats are :"<<c<<endl;
    cout<<"No. of vowels are :"<<v<<endl;
    c=0;v=0;
}

void uniq(char *str)
{
    while(*str!='\0')
    {
        int i;
        for(i=0;i<5;i++)
        {
            if(*str==vowel[i])
            {
                if(arr[(int)(*str)]!=1)
                {
                    arr[(int)(*str)]=1;
                    vow[v]= *str;
                    v++;

                }
                break;
            }
            else if(*str==(char)(vowel[i]-32))
            {
                int x = (int)(vowel[i]-32);
                if(arr[x]!=1){
                    arr[x]=1;
                    vow[v]= *str;
                    v++;
                   
                }  
                 break;              
            }
        }
        if(*str>='a' && i==5)
            {
                int x = (int)(*str - (char)32);
                if(arr[x]!=1){
                    arr[x]=1;
                    constant[c]= *str;
                    c++; 
                }  
            }
            else if(*str<'a' && i==5)
            {
               int x = (int)(*str);
                if(arr[x]!=1){
                    arr[x]=1;
                    constant[c]= *str;
                    c++;
                }
            }
        
        str++;
    }
    constant[c]='\0';
    vow[v]='\0';
    cout<<"Unique vowel are: "<<vow<<endl<<"Unique constant are: "<<constant<<endl;
}

int main()
{
    string str;
    cin>>str;
    part(&str[0]);
    uniq(&str[0]);

}