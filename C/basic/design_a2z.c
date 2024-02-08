//20 horizontal positions(word of 20 characters), 5 lines is a character's vertical length, 8 possible inputs(a to z) in each 5*20=50 positions
//storing input as string
//no space to be entered
//entered characters are to be displayed in a line exactly as they were entered in a string
//using for loop,arrays,strings,switch case instead of user-defined functions

#include <stdio.h>
#include <conio.h>

void main(void)
{
    char word[20];//string of 20 characters

    //used string instead of array because user has to input only once istead of 20 times
    printf("enter a string of 20 characters:");
    scanf("%[^\n]%*s",&word);

//saw this on internet. it allows scanf to accept space as input
//enter any character after you press enter after you enter the string

    for(int l=1;l<6;l++)
    {
        for(int y=0;y<20;y++)
        {
            switch (word[y])
            {
                case 'a':
                    switch (l)
                    {
                        case 1:printf(" ____  ");break;
                        case 2:printf("|    | ");break;
                        case 3:printf("|____| ");break;
                        case 4:printf("|    | ");break;
                        case 5:printf("|    | ");break;
                    }
                break;
                case 'b':
                    switch (l)
                    {
                        case 1:printf(" ____  ");break;
                        case 2:printf("|    | ");break;
                        case 3:printf("|____| ");break;
                        case 4:printf("|    | ");break;
                        case 5:printf("|____| ");break;
                    }
                break;
                case 'c':
                    switch (l)
                    {
                        case 1:printf(" _____ ");break;
                        case 2:printf("|      ");break;
                        case 3:printf("|      ");break;
                        case 4:printf("|      ");break;
                        case 5:printf("|_____ ");break;
                    }
                break;
                case 'd':
                    switch (l)
                    {
                        case 1:printf(" ____  ");break;
                        case 2:printf("|    \\ ");break;
                        case 3:printf("|    | ");break;
                        case 4:printf("|    | ");break;
                        case 5:printf("|____/ ");break;
                    }
                break;
                case 'e':
                    switch (l)
                    {
                        case 1:printf(" _____ ");break;
                        case 2:printf("|      ");break;
                        case 3:printf("|_____ ");break;
                        case 4:printf("|      ");break;
                        case 5:printf("|_____ ");break;
                    }
                break;
                case 'f':
                    switch (l)
                    {
                        case 1:printf(" _____ ");break;
                        case 2:printf("|      ");break;
                        case 3:printf("|_____ ");break;
                        case 4:printf("|      ");break;
                        case 5:printf("|      ");break;
                    }
                break;
                case ' ':
                    printf("   ");break;
                break;
            }
        }
        printf("\n");
    }
    getch();
}

/*
    else if(w=='g')
    {
        if(x==1){printf(" _____ ");}
        else if(x==2){printf("|      ");}
        else if(x==3){printf("|  __  ");}
        else if(x==4){printf("| |  | ");}
        else if(x==5){printf("|_|  | ");}
    }
    else if(w=='h')
    {
        if(x==1){printf("       ");}
        else if(x==2){printf("|    | ");}
        else if(x==3){printf("|____| ");}
        else if(x==4){printf("|    | ");}
        else if(x==5){printf("|    | ");}
    }
}
*/