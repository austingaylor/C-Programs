#include <stdio.h>
#define TRUE 1 
#define FALSE 0 

void make_copy_of_string(char str[], char str_copy[]);
void keep_chars(char str[]);
void convert_upper_to_lower_case(char str[]);

_Bool palindromeness(char str[]);

int main(void)
{

char phrase[101], phrase_copy[101];

printf("\nEnter a phrase: ");
fgets(phrase, 101, stdin);

			//printf("%s\n", phrase);

  make_copy_of_string(phrase, phrase_copy);	//printf("%s\n", phrase_copy);    //function to copy the string 

  keep_chars(phrase_copy);  //function to keep the characters 

  convert_upper_to_lower_case(phrase_copy);  // function to convert the upper case to lower case 
     
			//printf("%s\n", phrase_copy);

if(palindromeness(phrase_copy) == TRUE)
   printf("\nThe phrase: %s\n Is a palindrome!\n\n", phrase);
else
   printf("\nYour phrase: %s\n Is not a palindrome!\n\n", phrase);


return 0;
}

void make_copy_of_string(char str[], char str_copy[])
{

int i = 0;

while(str[i] != '\n' && str[i] != '\0')
   {
     str_copy[i] = str[i]; 
     i++;
   }
 str_copy[i] = '\0'; 
 str[i] = '\0';
}

// End of make_copy_of_string

void keep_chars(char string[])
{
   int i=0, j=0;

   while (string[i] != '\0')
   {
    if( ('A' <= string[i] && string[i] <= 'Z') || ('a' <= string[i] && string[i] <= 'z') ) 
    {
     string [j] = string[i]; 
     i++;
     j++;
    } 
    else 
    { 
	i++;
    }
   } 
	string[j] = '\0'; 
}

// End of keep_chars()

void convert_upper_to_lower_case(char string[])
{
  int i = 0; 
  while(string[i] != '\0')
  {
    if('A'<= string[i] && string[i] <= 'Z')
	{
    	string[i] = (string[i] + 32);
   	i++; 
	}
	else
	{
	i++;
	}
  }
	string[i] = '\0';
}


// End of convert_upper_to_lower_case(char string[])

_Bool palindromeness(char str[])

{
 int i,j;

 for(i = 0; str[i] != '\0'; i++);
 
for(j = 0,i--; j <= i;)
 {
   if(str[i] == str[j])
   {
      i--;
      j++;
   }
  	else
  	    break;
 }
 if(j > i)
    return(1);
 else
    return(0);
}
// End of _Bool palindromeness(char string[]) 