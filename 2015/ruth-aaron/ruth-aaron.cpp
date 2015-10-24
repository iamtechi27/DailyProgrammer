#include <stdio.h>

int factorSum(int x) {
	int sum = 0;
	for (int i = 2; i <=x; i++) {
		if (x % i == 0) {
			sum += i;
			do {
				x /= i;
			} while (x % i == 0);
		} //if (x % %i == 0)
	} //for (int i = 2; i <=x; i++)
	return sum;
} //factorSum

int main(void) {
	int count;
	scanf("%i", &count);
	for (int i = 0; i < count; i++) {
		int first, second;
		scanf(" (%i,%i)", &first, &second);
		bool valid = (second == first + 1) && factorSum(first) == factorSum(second);
		printf("(%i,%i) %s VALID\n", first, second, valid ? "" : "NOT");
	} //for (int i = 1; i < count; i++)
} //main
