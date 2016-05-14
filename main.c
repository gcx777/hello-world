#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputThreshold, inputTemperature, water, mercury, copper, silver, gold;
    water = 100;
    mercury = 357;
    copper = 1187;
    silver = 2193;
    gold = 2660;


    printf("\nEnter the threshold in celsius: ");
    scanf("%d", &inputThreshold);

    printf("Enter the observed boiling point in celsius: ");
    scanf("%d", &inputTemperature);

    if(((water-inputThreshold)==inputTemperature)||((water+inputThreshold)==inputTemperature))
    {
        printf("The substance you tested is: Water");
    }
    else if(((mercury-inputThreshold)==inputTemperature)||((mercury+inputThreshold)==inputTemperature))
    {
        printf("The substance you tested is: Mercury");

    }
    else if(((copper-inputThreshold)==inputTemperature)||((copper+inputThreshold)==inputTemperature))
    {
        printf("The substance you tested is: Copper");
    }
    else if(((silver-inputThreshold)==inputTemperature)||((silver+inputThreshold)==inputTemperature))
    {
        printf("The substance you tested is: Silver");

    }
    else if(((gold-inputThreshold)==inputTemperature)||((gold+inputThreshold)==inputTemperature))
    {
        printf("The substance you tested is: Gold");
    }
    else
    {

        printf("Substance unknown.");
    }



    return 0;
}
