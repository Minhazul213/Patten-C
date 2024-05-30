#include<stdio.h>
int main()
{
    int n=5,b,i=1, row, col;


    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n; col++)
        {
              if(col<=n-row)
                printf(" ");
               else
                 printf("* ");

        }
        printf("\n");
    }

    return 0;
}
