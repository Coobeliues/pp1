#include<bits/stdc++.h>

using namespace std;

// This function generates the key in
// a cyclic manner until it's length isi'nt
// equal to the length of original text
// string generateKey(string str, string key){
// 	int x = str.size();

// 	for (int i = 0; ;i++){
// 		if (x == i) i = 0;
// 		if (key.size() == str.size()) break;

// 		key.push_back(key[i]);
// 	}
// 	return key;
// }

// This function returns the encrypted text
// generated with the help of the key
string cipherText(string str, string key){
	string cipher_text;

	for (int i = 0; i < str.size(); i++){
		// converting in range 0-25
		char x = (str[i] + key[i]) %26;

		// convert into alphabets(ASCII)
		x += 'a';

		cipher_text.push_back(x);
	}
	return cipher_text;
}

// This function decrypts the encrypted text
// and returns the original text
// string originalText(string cipher_text, string key){
// 	string orig_text;

// 	for (int i = 0 ; i < cipher_text.size(); i++)
// 	{
// 		// converting in range 0-25
// 		char x = (cipher_text[i] - key[i] + 26) %26;

// 		// convert into alphabets(ASCII)
// 		x += 'A';
// 		orig_text.push_back(x);
// 	}
// 	return orig_text;
// }

// Driver program to test the above function
int main(){
	string str, keyword; cin>>str>>keyword;
	string kk=keyword;
	
	// string key = generateKey(str, keyword);		//same
	while(keyword.size()<str.size()) keyword+=kk; 	//same
	
	string cipher_text = cipherText(str, keyword);

	cout << cipher_text << "\n";

	return 0;
}
