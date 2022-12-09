#include <iostream>

using namespace std;

string palindrome(string s);

int main() {

	string s = " ";

	cout << "input word: ";
	cin >> s;
	cout << endl;

	cout << palindrome(s) << endl << endl;

   return 0;
}

string palindrome(string s) {
	string s_rev = s;
	int s_len = s.length();

	for (int i = 0; i < s_len; i++) {
		s_rev[s_len - i - 1] = s[i];
	}

	if (s == s_rev) {
		return "palindorme";
	}
	else {
		return "not palindorme";
	}
}