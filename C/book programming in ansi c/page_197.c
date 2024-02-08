// 7.2

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main() {
	int marks[50] = {0};
	int frequency[11] = {0};
	
	for (int i=0; i<=49; i++) {
		scanf("%d", &marks[i]);
		int z = marks[i] / 10;
		frequency[z] += 1;
	}
	
	printf("\n GROUP     RANGE     FREQUENCY");
	for(int i=0; i<=10; i++) {
		printf("\n %d     %d to %d     %d", i+1, i*10, i*10-1, frequency[i]);
	}
}
