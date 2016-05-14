//LAB 4 PART 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputValue, numOfQuarters, numOfDimes, numOfNickels, numOfCents;
    const int QUARTER=25, DIME=10, NICKEL=5, CENT=1;


    do
    {
        printf("Please give an amount in cents less than 100: ");
        scanf("%d", &inputValue);
    }
    while(inputValue<1||inputValue>99);

    printf("%d\n", inputValue);
    return 0;
}
