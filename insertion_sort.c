#include <stdio.h>
int main() {
	int arr[100], range, i, j, temp;
	printf("Enter the range of the array:");
	scanf("%d", &range);

	printf("Enter the array elements:");
	for (i = 0; i < range; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < range; i++) {
		temp = arr[i];
		j = i - 1;
		while ((j >= 0) && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j--;
		}
	}
	arr[j + 1] = temp;

	printf("The array elements after the insertion sort are: ");
	for (i = 0; i < range; i++)
		printf("%d ", arr[i]);
	return 0;
}