#include<stdio.h>
int main()
{
    int i,j;
    for(i=10; i>=1; i--)
    {
        for(j=1; j<=10; j++)
        {
              if( j<i)
                printf(" ");
            else
             printf("*");
        }


   printf("\n");
    }

}
