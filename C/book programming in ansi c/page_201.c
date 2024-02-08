// 201 7.3

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main() {
    int value[4][3] = {{0},{0}},
        girl_total[4] = {0},
        item_total[3] = {0},
        total=0;

    for (int i=0; i<=3; i++) {
        printf("enter number of each items sold by girl %d\n",i+1);
        for (int j=0; j<=2; j++) {
            scanf("%d", &value[i][j]);
            girl_total[i] += value[i][j];
            total += value[i][j];

            if (j == 0) {
                item_total[0] += value[i][0];
            } else if (j == 1) {
                item_total[1] += value[i][1];
            } else if (j == 2) {
                item_total[2] += value[i][2];
            }
        }
    }

    for (int i=0; i<=3; i++) {
        printf("\n %d", girl_total[i]);
    }

    printf("\n\n");
    
    for (int i=0; i<=2; i++) {
        printf("\n %d", item_total[i]);
    }
    
    printf("\n\n\n %d", total);
}
