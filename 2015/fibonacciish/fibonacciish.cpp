#include <cstdio>
#include <iostream>
using namespace std;

long first = 0, second = 1, result, target, start = 1;

int main() {
	scanf(" %ld", &target);
	while (true) {
		//cout << first << endl << second << endl; //uncomment at your own risk
		do {
			result = first + second;
			//cout << result << endl; //uncomment at your own risk. Horribly slow.
			first = second;
			second = result;
		} while (result < target);
		if (result == target) {
			first = 0;
			second = start;
			cout << first << " " << second << " ";
			do {
				result = first + second;
				cout << result << " ";
				first = second;
				second = result;
			} while (result < target);
			cout << "VALID" << endl;
			break;
		} //if (result == target)
		//cout << "NOT VALID" << endl << endl; //uncomment at your own risk.
		first = 0;
		second = ++start;
	} //while (true)
} //main
