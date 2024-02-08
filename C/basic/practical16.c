#include <stdio.h>
#include <conio.h>

int main()
{
    int roll_no,student_class;
    char name[30];

    printf("Enter the roll number : \n");
    scanf("%d",&roll_no);
    printf("Enter name of student : \n");
    scanf("%s",&name);
    printf("Enter student class : \n");
    scanf("%d",&student_class);

    printf("\n\n\n\t\t ********************************\n");
    printf("\t\t * Roll No. : %d\t\t*\n",roll_no);
    printf("\t\t * Name     : %s\t\t*\n",name);
    printf("\t\t * Class    : %d\t\t*\n",student_class);
    printf("\t\t ********************************\n");

    getch();
    return 0;
}
