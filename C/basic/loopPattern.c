#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    for (i=0;i<42*44;i++)
    {
        printf("/\\__/");
    }
    getch();
    return;
}
//on this screen maximum characters that can be printed are rows = 168. columns = 44
//patterns - /\__,/\__  ,/\,/\___,^^^___, .....
