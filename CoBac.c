#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int random1, random2, k, n;

Nhap:
	printf("Press 1 to start! \n");
	printf("Press any key to exit! \n");
	scanf_s("%d", &n);
	if (n == 1) {
		goto Lam;
	}
	else {
		goto Nhap;
	}
Lam:
	do
	{
		for (int i = 1; i <= 6; i++) {
			random1 = 1 + rand() % 6;
			random2 = 1 + rand() % 6;
		}
		printf("Random cuber: %d %d\n", random1, random2);
		if (random1 == random2) {
			printf("Double\n");
		}
			printf("___________________________\n");
			printf("Press: 1 to continue: \n");
			printf("Press any key to exit: \n");
			printf("___________________________\n");
		scanf_s("%d", &k);
	}
	while (k == 1); 
 }
