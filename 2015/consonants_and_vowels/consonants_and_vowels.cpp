#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string cons = "bcdfghjklmnpqrstvwxyz";
string CONS = "BCDFGHJKLMNPQRSTVWXYZ";
string vows = "aeiou";
string VOWS = "AEIOU";

void addConsonant(char c) {
	if (c == 'c') {
		cout << cons.at(rand()%21);
	} else {
		cout << CONS.at(rand()%21);
	}
}

void addVowel(char v) {
	if (v == 'v') {
		cout << vows.at(rand()%5);
	} else {
		cout << VOWS.at(rand()%5);
	}
}

int main() {
	string input;
	srand(time(NULL));
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (input.at(i) == 'c' || input.at(i) == 'C') {
			addConsonant(input.at(i));
		} else {
			addVowel(input.at(i));
		}// endif
	}// endfor
	cout << endl;
}// end main
