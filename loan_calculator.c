#include <stdio.h>

int main (void) {     
	
  int years, month, final_month;

  double left_over_payment, loan_balance, interest_for_this_month, monthly_payment, total_interest;  

  double monthly_interest_rate, annual_interest_rate;    

	printf("\n\nLoan Amount? ");  

	scanf("%lf",&loan_balance);  

	printf("%10.2f\n", loan_balance);    

	printf("\nHow many years is your loan?  ");  

	scanf("%i",&years);  

	printf("%10i\n", years);    

	printf("\nAnnual Interest Rate in %%: ");  

	scanf("%lf",&annual_interest_rate);  

	printf("%10.2f\n",annual_interest_rate );    

	printf("\nWhat is you monthly payment?  ");  

	scanf("%lf",&monthly_payment);  

	printf("%10.2f\n", monthly_payment);       

	monthly_interest_rate = (annual_interest_rate/100.0)/12;
   
	final_month    = years*12; 

	total_interest = 0.0;  
    
    printf("\n");   
   
for(month = 1; month <= final_month; month++) 

{    
	interest_for_this_month = monthly_interest_rate * loan_balance;
      
	total_interest = total_interest + interest_for_this_month;
 	
	loan_balance   = loan_balance - (monthly_payment - interest_for_this_month); 
	
	left_over_payment = interest_for_this_month - monthly_payment;;

	printf("Month %i    Interest = %.2lf    Left Over Payment = %.2lf    Balance = %.2lf\n", month, interest_for_this_month, left_over_payment, loan_balance);
}

printf("\nTotal Interest   = %10.2f\n", total_interest);  
	
printf("Final Loan Balance = %5.2f\n\n\n", loan_balance);     

 return 0;
}
