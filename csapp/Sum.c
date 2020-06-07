#include <stdio.h>

int rSum(int* start, int count);

int main() {
	int count = 2;
	int arr[2] = {1, 2};
	int r = rSum(arr, count);
	printf("The result is %d.\n", r);
}

int rSum(int *Start, int Count) {
  	if (Count <= 0) {
    		return 0;
  	}
	return *Start + rSum(Start+1, Count-1);
}
