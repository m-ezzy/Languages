//5 position(p1,p2,p3,p4,p5) ; 5 possible inputs(a,b,c,d,e) ; entered characters are to be displayed. using loop

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    char parr[5];
    char arr[5] = {'a','b','c','d','e'};

    printf("Enter the character at p1:");
    scanf(" %c",&parr[0]);

    printf("Enter the character at p2:");
    scanf(" %c",&parr[1]);

    printf("Enter the character at p3:");
    scanf(" %c",&parr[2]);

    printf("Enter the character at p4:");
    scanf(" %c",&parr[3]);
    
    printf("Enter the character at p5:");
    scanf(" %c",&parr[4]);

    for(int y=0;y<5;y++)
    {
        char s=parr[y];
        for(int x=0;x<5;x++)
        {
            if(s==arr[x])
            {
                alpha(s);
            }
        }
    }

    getch();
}

void alpha(char z)
{
    if(z=='a')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|    |\n");
    }
    if(z=='b')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|____|\n");
    }
    if(z=='c')
    {
        printf(" ____\n|    \n|    \n|    \n|____\n");
    }
    if(z=='d')
    {
        printf(" ____\n|    \\\n|    |\n|    |\n|____/\n");
    }
    if(z=='e')
    {
        printf(" ____\n|    \n|____\n|    \n|____\n");
    }
}
