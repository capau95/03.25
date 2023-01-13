#include <stdio.h>

int main () {

	int i, jahre;
	float betrag;

	printf("Geben Sie das Startkapital ein:\n");
	scanf("%f", &betrag);

	printf("Geben Sie die Laufzeit ein:\n");
	scanf("%d", &jahre);

	for (i=1; i<=jahre; i++) {

		betrag = betrag * 1.045;

		printf("Das Kapital nach Jahr %d beträgt %.2f €.\n", i, betrag);

	}

	return 0;

}
