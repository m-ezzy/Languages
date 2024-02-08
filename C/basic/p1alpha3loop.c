//one position(p1) and 3 possible inputs(a,b,c), the entered character is to be displayed. using loop

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int x=0;
    char arr[3] = {'a','b','c'};
    char p1;
    printf("Enter the character:");
    scanf("%c",&p1);
    while(x<3)
    {
        if(p1==arr[x])
        {
            alpha(p1);
        }
        x=x+1;
    }
    getch();
}

void alpha(char z)
{
    if(z=='a')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|    |");
    }
    if(z=='b')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|____|");
    }
    if(z=='c')
    {
        printf(" ____\n|    \n|    \n|    \n|____");
    }
}
