//20 horizontal positions(word of 20 characters), 5 lines is a character's vertical length, 8 possible inputs(a to z) in each 5*20=50 positions
//storing input as string
//no space to be entered
//entered characters are to be displayed in a line exactly as they were entered in a string
//using for loop,arrays,strings,user-defined functions

#include <stdio.h>
#include <conio.h>

void s(char w,int x);

void main(void)
{
    char word[20];//string of 20 characters
    char a2z[8] = {'a','b','c','d','e','f','g','h'};//array of 8 characters

//used string instead of array because user has to input only once istead of 20 times
    printf("enter a word of 20 characters:");
    scanf("%s",&word);

    for(int l=1;l<6;l++)
    {
        for(int y=0;y<20;y++)
        {
            for(int x=0;x<8;x++)
            {
                if(word[y] == a2z[x])
                {
                    s(a2z[x],l);
                }
            }
        }
        printf("\n");
    }
    getch();
}

//down here x is a locally defined variable, so everything works well!!!
void s(char w,int x)
{
    if(w=='a')
    {
        if(x==1){printf(" ____  ");}
        else if(x==2){printf("|    | ");}
        else if(x==3){printf("|____| ");}
        else if(x==4){printf("|    | ");}
        else if(x==5){printf("|    | ");}
    }
    else if(w=='b')
    {
        if(x==1){printf(" ____  ");}
        else if(x==2){printf("|    | ");}
        else if(x==3){printf("|____| ");}
        else if(x==4){printf("|    | ");}
        else if(x==5){printf("|____| ");}
    }
    else if(w=='c')
    {
        if(x==1){printf(" _____ ");}
        else if(x==2){printf("|      ");}
        else if(x==3){printf("|      ");}
        else if(x==4){printf("|      ");}
        else if(x==5){printf("|_____ ");}
    }
    else if(w=='d')
    {
        if(x==1){printf(" _____ ");}
        else if(x==2){printf("|     \\");}
        else if(x==3){printf("|     |");}
        else if(x==4){printf("|     |");}
        else if(x==5){printf("|_____/");}
    }
    else if(w=='e')
    {
        if(x==1){printf(" _____ ");}
        else if(x==2){printf("|      ");}
        else if(x==3){printf("|_____ ");}
        else if(x==4){printf("|      ");}
        else if(x==5){printf("|_____ ");}
    }
    else if(w=='f')
    {
        if(x==1){printf(" _____ ");}
        else if(x==2){printf("|      ");}
        else if(x==3){printf("|_____ ");}
        else if(x==4){printf("|      ");}
        else if(x==5){printf("|      ");}
    }
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
