#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char ch[101];
    gets(ch);
    int n=strlen(ch);
    printf("ASCII values of characters are:\n\n");
    for( i=0; i<n; i++)
    {
        printf("%c--%d\n",ch[i], ch[i]);
    }
    return 0;
}
