#include <stdio.h>

int main(void) {
	int arr[12] = { 12, 5, 2, -1, -3, 7, 0, 6, 4, 8, -6, 11 };
	int count = 0;

	int arr1[3][4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr1[i][j] = arr[count];
			count++;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}