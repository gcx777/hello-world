//Lab 2 - Part 1
//Course: APS105F
//Student name: Gabriel Castro Xavier
//Student number: 1001795818

//This is a program that, with the value of the monthly rate and number of months of a cell phone service,
// will calculate the total amount to be paid by the user,including taxes. It also says the amount of money to
// be paid to Mastercard (swipe fee) and the amount to be paid to Apple Pay.




#include <stdio.h>
#include <stdlib.h>

int main()
{
    //First, we will declare constants and variables.
    int serviceDuration, freeMonths;
    double monthlyRate, totalCharge, swipeFee, appFee, swipeRate, appRate;
    const double hst=0.13;
    // Now that everything we need is declared, we will ask the user to input some values.

    printf("Enter the monthly rate (in dollars): \n");
    scanf("%lf", &monthlyRate);
    printf("Enter the service duration (in months): \n");
    scanf("%d", &serviceDuration);
    printf("Enter the swipe fee rate (in percentage): \n");
    scanf("%lf", &swipeRate);
    printf("Enter the Apple Pay rate (in percentage): \n");
    scanf("%lf", &appRate);

    // Now, we have all the data needed. We will follow up to the computations.

    freeMonths = serviceDuration/4; //As, for every four month period, the user gets one free.
    totalCharge = (serviceDuration-freeMonths)*monthlyRate*(1+hst);
    swipeFee = totalCharge * (swipeRate/100);
    appFee = swipeFee*(appRate/100);

    //All the computations are now done. We will print the results for the user.

    printf("Your total free month(s) using iBell’s service is: %d \n", freeMonths);
    printf("Your total charge including taxes is: %.2lf \n", totalCharge);
    printf("The swipe fee paid to Mastercard is: %.2lf \n", swipeFee);
    printf("The fee paid to use Apple Pay is: %.2lf \n", appFee);


    return 0;
}
//end
