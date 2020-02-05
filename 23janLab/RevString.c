#include<stdio.h>
void revprint(char *str){
    // char st[100];
    int i=0;
    
    while(*str!='\0'){ 
        str++;
        i++;
    }
    while(i!=0){
        str--;
        printf("%c",*str);
        i--;
    }
}
int main()
{
    char str[100];
    scanf("%s",&str);
    revprint(str);
}