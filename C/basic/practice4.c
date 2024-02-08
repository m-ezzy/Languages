#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

void main()
{
/*
    char ccc;
    ccc=getchar();
    int x=isalpha(ccc); //for non-alpha 0, for capital alpha 1, for lowercase alpha 2
    printf("%d",x);
*/
/*
//    char n1[15],n2[15],n3='p',n4[15];
    char n1[15]=murtazaezzyabcd,n2[15]=murtazaezzyabcd,n3='p',n4[15]=murtazaezzyabcd;

//    scanf("%s %15s  %15c ",&n1,&n2,&n4);

    printf("\n1 %s \n2 %15s \n3 %c \n4 %15c ",n1,n1,n1,n1);
    printf("\n5 %s \n6 %15s \n7 %c \n8 %15c ",n2,n2,n2,n2);
    printf("\n9 %s \n%15s \n%c \n%15c ",n3,n3,n3,n3);
    printf("\n13 %s \n14 %15s \n15 %c \n16 %15c ",n4,n4,n4,n4);

    printf("\n17 %s \n18 %s \n19 \n20 %s ",n1,n2,n4);
    printf("\n21 %15s \n22 %15s \n23 \n24 %15s ",n1,n2,n4);
    printf("\n25 %c \n26 %c \n27 \n28 %c ",n1,n2,n4);
    printf("\n29 %15c \n30 %15c \n31 \n32 %15c ",n1,n2,n4);
*/
/*
    int x=10,y=1;
    for(int i=1;i<=x;i++)
    {
        if(i==count)
        {
            printf("%d",y)
        }
        printf("%d",y);
        y++;
    }
*/
/*
    //successfully nailed this program in one go!!! drew flowchart first
    int line_num,i,count,number=1;
    
    printf("enter number of lines to be printed in floyd's triangle:");
    scanf("%d",&line_num);

    for (i=1;i<=line_num;i++)
    {
        for (count=1;count<=i;count++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
*/
/*
    //nailed this program in 2 go's!!!!!!!! can't believe myself
    int line_num,i,count;
    
    printf("enter number of lines to be printed in floyd's triangle:");
    scanf("%d",&line_num);

    for (i=1;i<=line_num;i++)
    {
        //printf("\n %d   ",count);
        for (count=1;count<=i;count++)
        {
            //printf(" %d ",count);
            if (i%2==0)
            {
                if (count%2==0)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
            }
            else
            {
                if (count%2==0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }
*/

    //chapter 5 question 5.6    nailed it in first go!!!
    float x,y=0.0,z;

    printf("enter maximum value of y:");
    scanf("%f",&z);

    printf("Number |   0.0    |   0.1    |   0.2    |   0.3    |   0.4    |   0.5    |   0.6    |   0.7    |   0.8    |   0.9    |\n");
    printf("_______|__________|__________|__________|__________|__________|__________|__________|__________|__________|__________|\n");
    while(y<=z)
    {
        printf("%0.1f    |",y);
        x=0.0;
        while(x<1.0)
        {
            printf(" %f |",sqrt(y+x));
            x=x+0.1;
        }
        printf("\n");
        y=y+1.0;
    }




}