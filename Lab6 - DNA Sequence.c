#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int DNA[] = {1, 2, 4, 2, 2, 2, 1, 4, 4, 2, 3, 4, 4, 4, 2, 1, 4, 1,
3, 3, 2, 1, 3, 2, 1, 1, 2, 2, 2, 3, 4, 1, 3, 1, 2, 1,
4, 4, 4, 1, 1, 3, 1, 4, 2, 4, 4, 1, 4, 4, 1, 4, 4, 4,
4, 1, 1, 2, 3, 3, 3, 3, 4, 4, 3, 2, 3, 2, 3, 4, 3, 3,
4, 4, 1, 3, 3, 2, 1, 2, 3, 1, 2, 1, 3, 3, 2, 1, 4, 1,
4, 3, 4, 4, 4, 1, 2, 1, 3, 2, 0};

int* storeSequence(int *lenght)
{
   int i;
    printf("Enter %d characters (one of 12345) as a search sequence: \n",
            *lenght);
    int* inputSequence = (int*)malloc((*lenght) * sizeof(int));


    for(i=0;i<*lenght;i++)
   {
       scanf("%1d", &inputSequence[i]);
       if(inputSequence[i]<1||inputSequence[i]>5)
       {
           printf("Erroneous character input '%d' exiting\n", inputSequence[i]);
           printf("Goodbye");
           exit(0);

       }



    }


    return inputSequence;


}

void check(int *inputSequence, int *lenght)
{
    int i,n,c,count;








        for(n=0;n<101;n++)
        {
            int count=0;


                for(i=0;i<*lenght;i++)
                {


                    if(inputSequence[i]==DNA[n+i])
                    {
                        count++;

                    }
                    if(inputSequence[i]==5)
                    {
                        count++;
                    }

                }


            if(count==*lenght)
            {
                printf("Match of search sequence found at element %d\n", n);
            }




        }




}

int main()
{

    int l;
    printf("Enter length of DNA sequence to match: ");
    scanf("%d", &l);
    while(l>0)
    {


    int *lenght=&l;
    int *search = storeSequence(lenght);

    check(search, lenght);
    printf("Enter length of DNA sequence to match: ");
    scanf("%d", &l);
    }
    printf("Goodbye");









    return 0;
}
