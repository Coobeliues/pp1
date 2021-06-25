#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(i+1>s.size()-1) break;
        if(int(s[i])==int(s[i+1])+1) cnt++;
    }
    cout<<cnt;

    return 0;
}