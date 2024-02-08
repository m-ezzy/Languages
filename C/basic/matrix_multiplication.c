//the c array had to be initialized before runtime otherwise garbage result
//but c array could not be initialized if it's size is a variable whose value is given at runtime
//therefor i had to use symbolic constants
//then i realised i could initialize each element just before value assignment

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int a1,a2,b1,b2,p,q;

//reading sizes of matrices
    printf("enter size of matrix A and matrix B:");
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

//checking if both matrices are compitable for multiplication
    if(a2!=b1)
    {
        printf("matrices are not compatible for multiplication");
        exit(0);
    }

    int a[a1][a2] , b[b1][b2] , c[a1][b2];

//writing values in the matrices
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<a2;j++)
        {
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<b1;i++)
    {
        for(int j=0;j<b2;j++)
        {
            scanf(" %d",&b[i][j]);
        }
        printf("\n");
    }

//calculating values of mutiplication matrix
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b2;j++)
        {
            c[i][j]=0;//this had to be done, otherwise garbage result
            for(int k=0;k<a2;k++)
            {
                p=a[i][k];
                q=b[k][j];
                c[i][j]+=(p*q);
            }
        }
    }
//printing output on screen
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<a2;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<b1;i++)
    {
        for(int j=0;j<b2;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }




}