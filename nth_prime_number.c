#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)

{

printf("\n");

int test_int, nth_prime, divisor, number_of_primes; 	
_Bool isPrime;

printf("Which prime number do you want to know the value of? "); 		 // gathers the prime number the user want tested
scanf("%i", &nth_prime);
 
test_int = 1;
number_of_primes = 0;

do
{

test_int++;
isPrime = TRUE;

for(divisor = 2; divisor < test_int; divisor++)
{
	if(test_int % divisor == 0) 		 // loop for testing if integer is prime
	{
 		isPrime = FALSE;
		break;
	}	
}
 

	
	if(isPrime == TRUE)

	number_of_primes++; 		 // loop for counting the number of primes
}
while(number_of_primes < nth_prime);



printf("\nThe %i prime number is: %i\n", nth_prime, test_int); 		 // statement to print the requested information back to the user

return 0; 

}
