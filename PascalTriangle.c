#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, n, r;
    do{


    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &n);

    r = (2*n - 1);
    if(n==1){
        printf(" * ");
    }

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=r;col++)
        {
            if(row==1)
            {
                if(col==n&&col!=1)
                {
                    printf("*");
                }
                if(col<n||col>n)
                {
                printf(" ");

                }

            }
            if(row==n&&row!=1)
            {
                printf("*");
            }
            if(row>1&&row<n)
            {
                if(col==(n-row+1)||col==(n+row-1))
                {
                    printf("*");
                }else
                {
                    printf(" ");
                }
            }



    }
    printf("\n");
    }
    }while(n!=0);


    return 0;
}
