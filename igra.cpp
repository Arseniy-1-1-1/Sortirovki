#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int count = 0;
	int chislo;
	int rezhim;
	int dogadki=0;
	char znak;
	int verh = 1000;
	int niz = 1;
	scanf_s("%d", &rezhim);
	if (rezhim == 1) {
		chislo = rand()%1000;
		printf("ugadaite chislo \n");
		while (dogadki != chislo) {
			scanf_s("%d", &dogadki);
			if (dogadki < chislo) {
				count++;
				printf("zagadannoe chislo bolshe \n");
				dogadki = 0;
			}
			else if (dogadki > chislo) {
				count++;
				printf("zagadannoe chislo menshe \n");
				dogadki = 0;
			}
			else {
				count++;
				printf("zagadannoe chislo - %d \n", chislo);
				printf("ugadali za %d popitok \n", count);
				return 0;
			}
		}
	}
	else if (rezhim == 2) {
		printf("vvedite chislo: \n");
		scanf_s("%d", &chislo);
		printf("zagadannoe chislo - %d \n", chislo);
		while (dogadki != chislo) {
			dogadki = niz + (rand()%(verh-niz+1));
			printf("chislo compa: %d \n", dogadki);
			scanf_s(" %c", &znak);
			switch (znak) {
			case '<':
				verh = dogadki - 1;
				count++;
				break;
			case '>':
				niz = dogadki + 1;
				count++;
				break;
			case '=':
				count++;
				printf("zagadannoe chislo - %d \n", chislo);
				printf("ugadali za %d popitok \n", count);
				return 0;
			default:
				printf("neverniy znak  \n");
				return 1;
			}
			if (niz > verh) {
				printf("nevernie znaki \n");
				return 0;
			}
		}
	}
	else {
		printf("neverniy rezhim");
		return 0;
	}
}