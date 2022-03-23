#include <stdio.h>
int check_vowel(char a);
int main()
{
    char ch;
    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    
    if(check_vowel(ch))  
  {
		printf("\n %c is a VOWEL.", ch);
	}
    else 
  {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}

int check_vowel(char c)
{
    if (c >= 'A' && c <= 'Z')
       c = c + 32; 
 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
       return 1;
 
    return 0;
}