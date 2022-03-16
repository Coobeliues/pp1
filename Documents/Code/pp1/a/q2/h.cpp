#include <iostream>

using namespace std;

int main(){
    string s, t; cin>>s>>t;
    for(int i=0; i<t.size(); i++){
        if(s[0]!=t[i]) cout<<t[i];
    }
    
    
    return 0;
}