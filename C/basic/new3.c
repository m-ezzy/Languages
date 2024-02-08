//see constant and variable rules

#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>

int main() {
    int x = 5;
    int const a = 10;
    printf("%d %d \n", x, a);

    x = 15;
    //a=20; we cannot reassign value to a constant. constant is declared by writing const

    printf("%d %d", x, a);

    getch();
    return x;
}
