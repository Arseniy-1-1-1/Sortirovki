/*#include <stdio.h>


bool IsMatch(int mas1[], int mas2[]) {
	for (int i = 0; i < 4; ++i) {
		if (mas2[i] != mas1[i]) {
			break;
		}
		return true;
	}
}

int main() {
	int codes1[] = { 1,1,1,1 };
	int codes2[] = { 2,2,2,2 };
	int codes3[] = { 3,3,3,3 };
	int codes4[] = { 4,4,4,4 };
	const char* nazvanie[] = { "pivo", "coffee", "goroh", "bulka" };
	int cena[] = { 130,700,100,20 };
	int skidka[] = { 10, 30, 23, 17 };
	int count[] = { 0,0,0,0 };
	int sum[] = { 0,0,0,0, 0 };
	int userInput = 0;
	int currentCode[] = { 0,0,0,0 };
	int currentIndex = -1;

	while (true) {
		printf("vvedite operaciu: ");
		scanf_s("%d", &userInput);
		switch (userInput) {
		case 1: {
			printf("Enter code: ");

			for (int i = 0; i < 4; ++i) {
				scanf_s("%d", &currentCode[i]);
			}
			if (IsMatch(currentCode, codes1)) {
				currentIndex = 1;
			}
			if (IsMatch(currentCode, codes2)) {
				currentIndex = 2;
			}
			if (IsMatch(currentCode, codes3)) {
				currentIndex = 3;
			}
			if (IsMatch(currentCode, codes4)) {
				currentIndex = 4;
			}
			printf("%d ", currentIndex);
			break;
		}
		case 2: {
			if (currentIndex == 1) {
				printf("nazvanie:%s cena:%d skidka:%d\n", nazvanie[0], cena[0], skidka[0]);
			}
			if (currentIndex == 2) {
				printf("nazvanie:%s cena:%d skidka:%d\n", nazvanie[1], cena[1], skidka[1]);
			}
			if (currentIndex == 3) {
				printf("nazvanie:%s cena:%d  skidka:%d%\n", nazvanie[2], cena[2], skidka[2]);
			}
			if (currentIndex == 4) {
				printf("nazvanie:%s cena:%d skidka:%d\n", nazvanie[3], cena[3], skidka[3]);
			}
			break;
		}
		case 3: {
			if (currentIndex == 1) {
				count[0]++;
				sum[0] = (cena[0] - cena[0] / 100 * skidka[0]) * count[0];
			}
			if (currentIndex == 2) {
				count[1]++;
				sum[1] = (cena[1] - cena[1] / 100 * skidka[1]) * count[1];
			}
			if (currentIndex == 3) {
				count[2]++;
				sum[2] = (cena[2] - cena[2] / 100 * skidka[2]) * count[2];
			}
			if (currentIndex == 4) {
				count[3]++;
				sum[3] = (cena[3] - cena[3] / 100 * skidka[3]) * count[3];
			}
			printf("Check updated\n");
			break;
		}
		case 4: {
			for (int i = 0; i < 4; ++i) {
				if (count[i] != 0) {
					printf("nazvanie:%s cena:%d Count:%d Sum:%d\n", nazvanie[i], cena[i], count[i], sum[i]);
				}
			}
			break;
		}
		case 5: {
			for (int i = 0; i < 4; ++i) {
				sum[4] += sum[i];
			}
			printf("Summ:%d\n", sum[4]);
			break;
		}

		}
	}

}*/