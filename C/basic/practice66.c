#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int combination(int n,int r)
{
    int answer=1;

    for(int i=1;i<=n;i++)
    {
        answer=answer*i;
    }
    for(int i=1;i<=r;i++)
    {
        answer=answer/i;
    }
    for(int i=1;i<=n-r;i++)
    {
        answer=answer/i;
    }
    return answer;
}

void main()
{
    //chapter 6 table of binomial coefficients   nailed the program logic in one go!!!
    //there were only 2 syntax errors
    int table;

    printf("enter the size of the table:");
    scanf("%d",&table);

    printf("nr");
    for(int i=0;i<=table;i++)
    {
        printf("   %d",i);
    }
    printf("\n________________________________________________________");
    
    for(int i=0;i<=table;i++)
    {
        printf("\n");
        printf("%d   ",i);
        
        for(int j=0;j<=i;j++)
        {
            printf("%d   ",combination(i,j));
        }
    }

}


/*
int combination(int n,int r)
{
    int answer=1;

    for(int i=1;i<=n;i++)
    {
        answer=answer*i;
    }
    for(int i=1;i<=r;i++)
    {
        answer=answer/i;
    }
    for(int i=1;i<=n-r;i++)
    {
        answer=answer/i;
    }
    return answer;
}
*/