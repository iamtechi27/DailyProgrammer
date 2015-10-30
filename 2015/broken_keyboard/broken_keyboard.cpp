#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream enable1 ("enable1.txt");

string longestWord(string &);
boolean containsChar(string &, char &);

int main() {
	if (enable1.is_open()) {
		int count;
		getline(cin, count);
		string userWords[count];
		for (int i = 0; i < count; i++) {
			getline(cin, userWords[i]);
		}
		for (int i = 0; i < count; i++) {
			cout << longestWord(userWords[i]) << endl;
		}
		enable1.close();
	}
}

string longestWord(string userWord) {
	string dictWord;
	while (getline(enable1, dictWord)) {
		for (int i = 0; i < userWord.length(); i++) {
			if
