#include <stdio.h>
 
int main()
{
  	char str[100];
  	int i, vowels, consonants;
  	i = vowels = consonants = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
              printf("vowel:%c\n",str[i]);
 		}
  		else
    		{consonants++;
            printf("consonent:%c\n",str[i]);
            }
    	i++;
	}
    printf("\n Number of Vowels in this String = %d", vowels);  
	printf("\n Number of Consonants in this String = %d", consonants);   	
  
  	return 0;
}
