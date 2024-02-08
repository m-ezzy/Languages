#include "must1.h"
#include "function_declare.h"

START
{
    int size;

    p("enter the size of the array to be sorted:");
    s("%d",&size);

    int array[size];

    FOR(size)
    {
        s("%d",&array[i]);
    }

    bubblesort(array,size);
    
    FOR(size)
    {
        p("\n%d",array[i]);
    }
}