//one position(p1) and 3 possible inputs(a,b,c), the entered character is to be displayed. very simple using 3 if statements

#include <stdio.h>
#include <conio.h>

void main()
{
    char p1;
    printf("Enter the character:");
    scanf("%c",&p1);

    if(p1=='a')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|    |");
    }
    if(p1=='b')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|____|");
    }
    if(p1=='c')
    {
        printf(" ____\n|    \n|    \n|    \n|____");
    }
    getch();
}
