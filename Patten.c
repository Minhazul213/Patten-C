#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,j,r=1;
    printf("Enter Any Integer number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if( j<=n-i)
            printf(" ");
          else
            printf("*");

        }

          printf("\n");
    }

    getch();
}
