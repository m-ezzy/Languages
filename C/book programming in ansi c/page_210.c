// median of a list of numbers

//nailed the program logic in one go!!! i'm amazed at myself...! only 3 syntax errors

#include <stdio.h>
#include <conio.h>

void main() {
	int n,
		temp;
	float median;

	printf("enter number of values : ");
	scanf("%d", &n);

	float a[n];

	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if(a[i] > a[j]) {
				continue;
			} else {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	if (n % 2 != 0) {
		median = a[n/2];
	} else {
		median = a[n/2-1] + a[n/2] / 2.0;
	}
	
	for (int i=0; i<n; i++) {
		printf("\n %d", a[i]);
	}

	printf("\n median is %f", median);
}
