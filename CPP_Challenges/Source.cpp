#include "Header.h"
#include "TriangleArea.h"
#include "PalindromeCheck.h"
#include "UniqueNumberFinder.h"

int main() {
	/* cout << TriangleAreaTitle << endl;
	TriangleArea triangle;
	int area = triangle.calculateArea(triangle.getBase(), triangle.getHeight());
	cout << "Area: " << area; */

	/*PalindromeCheck palindromecheck;
	bool isPalindrome = palindromecheck.checkPalindrome(palindromecheck.getWord());
	if (isPalindrome) cout << palindromecheck.word << " is a Palindrome!";
	else cout << palindromecheck.word << " is NOT a Palindrome!";
	return 0;*/

	UniqueNumberFinder unf;
	if (unf.FindUniqueNumber() == -1) {
		cout << "No Unique Number:(";
	}
	else {
		cout << "Unique Number: " << unf.FindUniqueNumber();
	}
	return 0;
}