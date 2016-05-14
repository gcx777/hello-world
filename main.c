//Lab2 - Part 2 - aps105h
//Student: GABRIEL CASTRO XAVIER
//Student Number: 1001795818

//This program deciphers a 3 digit code doing the following: swapping the first one with the third one, and changing the second for its 9 complement.


#include <stdio.h>
#include <stdlib.h>

int main()


{

    int inputCode, firstDigit, secondDigit, thirdDigit;//Declared variables. One to store the code entered by the user,
    //and the others to store the three separated digits.


    printf("Enter an encrypted 3-digit code: ");// Here, we ask the user to enter the three digit code
    scanf("%d", &inputCode);//We read the code and store it in inputCode

    // Now that we have all the data we need, we are going to start the computations.
    firstDigit = inputCode/100; //This will give us the first digit of the code, because we are dividing two integers.
    secondDigit = (inputCode/10)%10;//This will give us the second digit, because when we divide by 10 we get the first two, and when we use the mod ope-
    //rator, it gives us the remainder of the division.
    thirdDigit = inputCode%10;//This will always give us the first digit, because it is the remainder of the division.
    secondDigit = (9-secondDigit);//We do this in order to change the second digit to its 9 complement.






    printf("The real 3-digit code is: %d%d%d\n",thirdDigit,secondDigit,firstDigit);//Now, we print the results. We have swapped the first and third digit.

    return 0;
}
