#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        cout << char((122 - s[i]) + 97);
    }

    return 0;
}