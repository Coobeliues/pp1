#include <iostream>

using namespace std;

int main(){
    string s, s1; cin >> s >> s1;
    string ans="";
    while(s1.size() < s.size()) s1 += s1;
    
    for(int i = 0; i < s.size(); i++){
        ans += ((s[i] - 97 + s1[i] - 97) % 26) + 97;
    }
    cout << ans;

    return 0;
}