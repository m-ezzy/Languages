//#include "must2.c"
#include "must1.h"

START
    int num,fact=1;
    
    P1"enter number of which you want the factorial:"P2
    S1"%d",&num S2

    FOR(num)
        fact=fact*(i+1);
    END
    P1"%d",fact P2
END