#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "main.h"

//float area_of_circle(float r);

void main()
{
    float radius;

    printf("enter radius of circle in float type:");
    scanf("%f",&radius);

    printf("area of circle with radius %f is %f",radius,area_of_circle(radius));
}