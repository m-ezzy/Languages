#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
/*
    int x,y,z;
    //char a='i';
    char a='a';
    printf("\n1 %c",a);
    printf("\n2 %d",a);
    printf("\n3 %c",'a');
    printf("\n4 %d",'a');
*/
/*
//    float f=1.125;
//    float f=1.1258;
//    float f=1.125844444444444444444444444444444444;
//    float f=1.125844444444444444444444444444444444f;
//    float f=1.125844444444444444444444444444444444F;
//    float f=1.125877777777777777777777777777777777;
//    float f=1.125877777777777777777777777777777777f;
//    float f=1.125877777777777777777777777777777777F;
    float f=1.123456789;
//    double f=1.123456789; //change all %f to %lf


    printf("\n1  %f",f);
    printf("\n");
    printf("\n2  %.1f",f);
    printf("\n3  %.2f",f);
    printf("\n4  %.3f",f);
    printf("\n5  %.4f",f);
    printf("\n6  %.5f",f);
    printf("\n7  %.6f",f);
    printf("\n8  %.7f",f);
    printf("\n");
    printf("\n9  %0.1f",f);
    printf("\n10 %0.2f",f);
    printf("\n11 %0.3f",f);
    printf("\n12 %0.4f",f);
    printf("\n13 %0.5f",f);
    printf("\n14 %0.6f",f);
    printf("\n15 %0.7f",f);
*/
/*
    //program to calculate harmonic series 1/1 + 1/2 + 1/3 +.....+ 1/n
    int x=5;
    float f=0.0;
    for(float n=1.0;n<=x;n++)
    {
        f=f+(1/n);
        printf("%0.4f",f);
    }
    printf("%0.4f",f);
*/
/*
    //program to read price in rupees and give back price in paise
    float paise,rup;
    printf("enter the price in rupees 2 point form:");
    scanf(" %f",&rup);
    paise=rup*100.0;
    printf("%0.0f",paise);
*/
/*
    //signed int z; couldn't assign value of z to array's members because different types
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int x=0;x<10;++x)
    {
        printf("enter %d member of array:",x);
        scanf(" %d",&arr[x]);
    }

    for(int y=0;y<10;++y)
    {
        if(arr[y]>0)
        {
            printf("\n%d is positive",arr[y]);
        }
        else if(arr[y]<0)
        {
            printf("\n%d is negative",arr[y]);
        }
        else
        {
            break; //break statement means exit the for loop
        }
        printf("\nend1");
    }
    printf("\nend2");//this end1 and end2 statements let's me check what's going on inside the computer.how the compiler and computer works
*/
/*
    //program to see how values are stored in short long int.playing around with integer numbers
    short int z;
    int x,y;
    printf("enter 6 digit number in x");
    scanf("%d",&x);
    printf("enter 6 digit number in y");
    scanf("%d",&y);
    z=x+y;
    //as soon as the sum of x and y exceeds 32767 the value in z becomes negative and value goes backward
    //like x=1, y=32766 z=32767, y=32767 z=-32768, y=32768 z=-32767, y=32769 z=-32766
    //y=65533 z=-2, y=65534 z=-1, y=65535 z=0, y=65536 z=1, y=65537 z=2........
    //it's using 2's compliment method!!! to store the integer numbers
    printf("%d   %d   %d",x,y,z);
*/
/*
    //here if you try to store point number in integer variable then only value before point is stored
    int z;
    float x,y;
    printf("enter number in x");
    scanf("%f",&x);
    printf("enter number in y");
    scanf("%f",&y);
    z=x+y;
    printf("%f   %f   %d",x,y,z);
*/




}