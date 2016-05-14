//LAB 3 - PART 1
//STUDENT: GABRIEL CASTRO XAVIER
//STUDENT NUMBER: 1001795818
//This program is going to calculate the monthly rate
//that needs to be paid by the buyer based on the purchase
//price, the down payment, the finance term and the monthly rate.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //First, we declare the variables.

   int purchasePrice, downPayment, financeTerm;

   //Note: totalRate is a variable used to ease the calculations.

   double monthlyRate, monthlyPayment, totalRate;

   //In the following lines, we ask the user to input
   //the information needed.

   printf("Enter the purchase price: ");
   scanf("%d", &purchasePrice);

   printf("Enter the amount of down payment: ");
   scanf("%d", &downPayment);

   printf("Enter the finance term (in months): ");
   scanf("%d", &financeTerm);

   printf("Enter the monthly interest rate (in percentage): ");
   scanf("%lf", &monthlyRate);

   //Here, we say that the variable totalRate is equivalent to
   //the monthly rate plus one to the power of the number of months
   //of the finance term.

   totalRate = pow((1+monthlyRate), financeTerm);

   //Here, we apply the given formula.

   monthlyPayment = ((purchasePrice-downPayment)*monthlyRate*totalRate)/(totalRate-1);

   //And now we give the user the result.

   printf("The monthly payment is: %.2lf", monthlyPayment);


    return 0;
}
//END
