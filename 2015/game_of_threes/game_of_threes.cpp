#include <cstdio>
using namespace std;

int main() {
	int input, n;
	scanf(" %i", &input);
	while (input > 1) {
		n = input % 3 == 0 ? 0 : input % 3 == 1 ? -1 : 1;
		printf("%i %i \n", input, n);
		input = (input + n) / 3;
	}
	printf("%i \n", input);
}
