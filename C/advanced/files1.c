#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(void)
{
    char data[200],fname[30];
    FILE *fp;
    printf("\nEnter a File Name to Open/Create: ");
    gets(fname);
    fp=fopen(fname,"w");
    if(fp==NULL)
    {
        printf("\nError Occurred while Opening/Creating the File!");
    }
    else
    {
        printf("\nEnter the Data: ");
        gets(data);
        while(strlen(data)>0)
        {
            fputs(data,fp);
            fputs("\n",fp);
            printf("\nEnter the Data: ");
            gets(data);
        }
    }
    fclose(fp);
    getch();
}