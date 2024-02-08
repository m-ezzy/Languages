#include <stdio.h>
#include <conio.h>

struct students
{
    int roll_no;
    char name[30];
    float subject1;
    float subject2;
    float subject3;
};

void main()
{
    struct students student1={25,"murtaza"},student2,student3;

    printf("\n%d %s",student1.roll_no,student1.name);

    printf("enter student1 123marks:");
    scanf(" %f\n %f\n %f",&student1.subject1,&student1.subject2,&student1.subject3);
    //don't put \n after last %f or you'll be asked to enter fourth valu!!!
    //don't remove these 2 \n or computer will take no input

    student2.subject1=student1.subject1;
    printf("\n%f %f",student1.subject1,student2.subject1);
}