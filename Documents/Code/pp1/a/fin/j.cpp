#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s,t; cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"Understandable have a nice day";
        return 0;
    }
    
    for(int i=1;i<=s.size();i++){
        int cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==t[j]) cnt++;
        }
        if(cnt==s.size()){
            cout<<i-1;
            return 0;
        } 
        rotate(t.begin(), t.begin()+1, t.end());
    }
    
    cout<<"Understandable have a nice day";

    return 0;
}