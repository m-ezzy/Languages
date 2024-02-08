//only one position and 3 possible inputs and the entered character is to be displayed. p1 a b c  ,not using simple 3 ifs

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char p1,p2,p3;

    printf("enter p1:");
    scanf("%c",&p1);
    printf("enter p2:");
    scanf("%c",&p2);
    printf("enter p3:");
    scanf("%c",&p3);

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
