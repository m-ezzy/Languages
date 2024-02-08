#include <stdio.h>
#include <conio.h>

void main()
{
int m1,m2,m3,m4,m5,obm;
long int no;
float per;
char nam[30];
clrscr();
printf("Enter the student number:");
scanf("%ld",&no);
printf("Enter the student name:");
scanf("%s",&nam);
printf("Enter subject1 marks:");
scanf("%d",&m1);
printf("Enter subject2 marks:");
scanf("%d",&m2);
printf("Enter subject3 marks:");
scanf("%d",&m3);
printf("Enter subject4 marks:");
scanf("%d",&m4);
printf("Enter subject5 marks:");
scanf("%d",&m5);

obm=m1+m2+m3+m4+m5;
per=obm/5.0;

clrscr();
printf("\t\t------------------------------------");
printf("\n\t\t\tStudent's Result");
printf("\n\t\t------------------------------------");
printf("\n Student Name : %s                  Student Number : %ld",nam,no);
printf("\n ____________                       ______________");
printf("\n**************************************************************");
printf("\n* subject1 : %d                                              *",m1);
printf("\n* subject2 : %d                                              *",m2);
printf("\n* subject3 : %d                                              *",m3);
printf("\n* subject4 : %d                                              *",m4);
printf("\n* subject5 : %d                                              *",m5);
printf("\n*____________________________________________________________*");
printf("\n* total marks : 500                                          *");
printf("\n* obtained marks : %d                                       *",obm);
printf("\n* percentage : %f                                     *",per);
printf("\n*____________________________________________________________*");
printf("\n**************************************************************");
getch();
}
