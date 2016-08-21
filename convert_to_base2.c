#include <stdio.h>

unsigned long long int convertToBaseTwo(unsigned long long int baseTen);

int main(void) 
{
unsigned long long int q, r;
unsigned long long int baseTen;

printf("Input a number you wish to convert to base_2: ");
scanf("%llu", &baseTen);

convertToBaseTwo(baseTen);
printf("\n");
return 0;

}

unsigned long long int convertToBaseTwo(unsigned long long int baseTen)
{
unsigned long long int q,r;

q = baseTen / 2;
r = baseTen % 2; 

if(q > 0)
	convertToBaseTwo(q);
printf("%i", r);

}
