#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]+n>90) s[i]=s[i]+n-26;
        else s[i]+=n;
    }
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }

    return 0;
}