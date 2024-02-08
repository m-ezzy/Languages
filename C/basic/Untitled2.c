#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int z;
    printf("enter an integer to be displayed : \n");
    scanf("%d",&z);
    printf("%d is the number you entered. \n\n\n",z);

    int num1,num2,sum;
    printf("Enter num1 and num2 :\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("summation %d + %d = %d ",num1,num2,sum);

    getch();
    return 0;
}
