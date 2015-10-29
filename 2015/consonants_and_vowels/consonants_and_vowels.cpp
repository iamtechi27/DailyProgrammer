#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string cons = "bcdfghjklmnpqrstvwxyz";
string vows = "aeiou";

void addConsonant(char c) {
	cout << cons.at(rand()%21);
}

void addVowel(char v) {
	cout << vows.at(rand()%5);
}

int main() {
	string input;
	srand(time(NULL));
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (input.at(i) == 'c') {
			addConsonant(input.at(i));
		} else {
			addVowel(input.at(i));
		}// endif
	}// endfor
	cout << endl;
}// end main
