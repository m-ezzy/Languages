#include "must1.h"

/*global variable declaration*/
int num;
float thell,theul,b,total=0.0;

/*user defined function declaration*/
void input(void);
void area_total(void);
float area_trap(float ll, float ul);
float funcx(float x);

void main()
{
    input();
    b=(theul-thell)/(float)num;
    area_total();
    p("\ntotal area = %f",total);
    NL NL NL
}

void input(void)
{
    p("enter lower limit:");
    s(" %f",&thell);
    p("enter upper limit:");
    s(" %f",&theul);
    p("enter number of trapezoids:");
    s(" %d",&num);
}

void area_total(void)
{
    float ll,ul;
    ll=thell;
    ul=thell+b;

    while(ul<=theul)
    {
        total=total+area_trap(ll,ul);
        ll=ul;
        ul=ul+b;
    }
    total=total*b*0.5;
}

float area_trap(float ll, float ul)
{
    float h1,h2;
    h1=funcx(ll);
    h2=funcx(ul);
    return (h1+h2);
}

float funcx(float x)
{
    return(x*x+1.0);
}