#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    int cnt= 0;
    for (int i=0; i<s.size(); i++){
        if (i+2>=s.size() or i+1>=s.size()) break;
        if (s[i] == '3' and s[i+1] == '7' and s[i+2] == '5'){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}