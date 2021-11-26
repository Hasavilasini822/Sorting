#include <stdio.h>
int main() {
	int arr[100], range, i, j, temp;
	printf("enter the range of the array:");
	scanf("%d", &range);

	printf("enter the elements:");
	for (i = 0; i < range; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < (range - 1); i++) {
		for (j = 0; j < (range - 1 - i); j++) {
			if (arr[j + 1] < arr[j]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("sorted elements are:");
	for (i = 0; i < range; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}