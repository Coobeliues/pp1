#include <bits/stdc++.h>

using namespace std;

// utility function to check whether
// a string is palindrome or not
bool isPalindrome(string str){
	int n = str.size();
	for (int i=0; i < n/2; i++)
		if (str.at(i) != str.at(n-i-1)) return false;

	// palindrome string
	return true;
}

int maxLengthNonPalinSubstring(string str){
	int n = str.size();
	char ch = str[0];

	// to check whether all characters
	// of the string are same or not
	int i = 1;
	for (i=1; i<n; i++)
		if (str.at(i) != ch) break;

	// All characters are same, we can't
	// make a non-palindromic string.
	if (i == n) return 0;

	// If string is palindrome, we can make
	// it non-palindrome by removing any
	// corner character
	if (isPalindrome(str)) return n-1;

	return n;
}

int main(){
	string str; cin>>str;

	cout << maxLengthNonPalinSubstring(str);

	return 0;
}
