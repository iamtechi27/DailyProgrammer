#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string cons = "bcdfghjklmnpqrstvwxyz";
string CONS = "BCDFGHJKLMNPQRSTVWXYZ";
string vows = "aeiou";
string VOWS = "AEIOU";
string output;

void addConsonant(char c) {
	if (c == 'c') {
		output += cons.at(rand()%21);
	} else {
		output += CONS.at(rand()%21);
	}// endif
}// end addConsonant

void addVowel(char v) {
	if (v == 'v') {
		output += vows.at(rand()%5);
	} else {
		output += VOWS.at(rand()%5);
	}// endif
}// end addVowel

int main() {
	string input;
	srand(time(NULL));
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (input.at(i) == 'c' || input.at(i) == 'C') {
			addConsonant(input.at(i));
		} else if (input.at(i) == 'v' || input.at(i) == 'V') {
			addVowel(input.at(i));
		} else {
			output = "Input was invalid.";
			break;
		}
	}// endfor
	cout << output << endl;
}// end main
