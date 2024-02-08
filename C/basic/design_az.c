//20 horizontal positions(20 characters of sentence), 5 lines, 26 possible inputs(a to z)
//storing input as string
//entered characters are to be displayed in a line exactly as they were entered in a string
//using for loop,arrays,strings,user-defined functions

#include <stdio.h>
#include <conio.h>

void s(char w,int x);

void main()
{
    char word[20];//string of 20 characters
    char a2z[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};//array of 26 characters
    //char k;

//used string instead of array because user has to input only once istead of 20 times
    printf("enter a string of 25 characters you want to display:");
    scanf(" %s",&word);

    for(int l=0;l<8;++l) //here's the bug. rethink program logic. make flowchart first honey
    {//printf("\n.1");
        for(int y=0;y<20;y++)
        {//printf("\n.2");
            for(int x=0;x<26;x++)
            {//printf("\n.3");
                if(word[y] == a2z[x])
                {//printf("\n.4");
                    //k=a2z[x];
                    s(a2z[x],l);
                     
                    /*
                    if(a2z[x]=='a')
                    {//printf("\n.5");
                        a(l);printf(" ");
                    }
                    else if(a2z[x]=='b')
                    {//printf("\n.6");
                        b(l);printf(" ");
                    }
                    else if(a2z[x]=='c')
                    {//printf("\n.7");
                        c(l);printf(" ");
                    }
                    else
                    {//printf("\n.8");
                        printf("     ");
                    }*/
                }
            }
        }
        printf("\n");
    }
    getch();
}

//down here x is a locally defined variable in each function, so everything works well!!!
/*
void a(int x)
{
    if(x==1){printf(" ____ ");}
    if(x==2){printf("|    |");}
    if(x==3){printf("|____|");}
    if(x==4){printf("|    |");}
    if(x==5){printf("|    |");}
}

void b(int x)
{
    if(x==1){printf(" ____ ");}
    if(x==2){printf("|    |");}
    if(x==3){printf("|____|");}
    if(x==4){printf("|    |");}
    if(x==5){printf("|____|");}
}

void c(int x)
{
    if(x==1){printf(" _____");}
    if(x==2){printf("|     ");}
    if(x==3){printf("|     ");}
    if(x==4){printf("|     ");}
    if(x==5){printf("|_____");}
}
*/

void s(char w,int x)
{
    if(w=='a')
    {
        if(x==1)
        {
            printf(" ____  ");
        }
        else if(x==2)
        {
            printf("|    | ");
        }
        else if(x==3)
        {
            printf("|____| ");
        }
        else if(x==4)
        {
            printf("|    | ");
        }
        else if(x==5)
        {
            printf("|    | ");
        }
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
    return;    
}
