#pragma once
#include "Header.h"

class PalindromeCheck {
	public:
		string word = "";
		string getWord();
		bool checkPalindrome(string word);
};

string PalindromeCheck::getWord() {
	cout << "Enter a word: ";
	cin >> this->word;
	return this->word;
}

bool PalindromeCheck::checkPalindrome(string word) {
	int remainder = word.length() % 2;
	
	string firsthalf = word.substr(0, word.length() / 2);
	string secondhalf;
	if (remainder == 0) secondhalf = word.substr(word.length() / 2);
	else secondhalf = word.substr((word.length() + 1) / 2);
	
	reverse(secondhalf.begin(), secondhalf.end());
	if (firsthalf == secondhalf) return true;
	else return false;
}