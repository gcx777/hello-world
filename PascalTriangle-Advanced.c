#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void spaces(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf(" ");
    }
}

int factorial(int n)
{
    int i, result=1;
    for(i= n; i>=1; i--)
    {
       result*= i;

    }
    return result;
}

int choose(int n, int r)
{
    int a, b, c, result;
    a = factorial(n);
    b = factorial(r);
    c = factorial(n-r);
    result = a/(b*c);

    return result;


}

void line(t)
{
    int i, d, result;
    for(i=t;i>=0;i--)
    {
        result = choose(t, i);
        d = log10(result)+1;
        printf("%d", result);
        spaces(6-d);




    }
    printf("\n");
    return 0;
}
void triangle(p)
{
    int i;
    int j;
    int s = p;
    j = ((3*s)-3);
    for(i=0;i<p;i++)
    {

        if(i!=(p-1))
        {
            spaces(j);
            j-=3;
        }





        line(i);
    }

}



int main()
{
    int n;
    printf("What is the number of rows in Pascal's triangle? ");
    scanf("%d", &n);

    while(n>=0)
    {
        triangle(n);
        printf("What is the number of rows in Pascal's triangle? ");
        scanf("%d", &n);


    }














    return 0;
}
