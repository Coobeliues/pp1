#include <iostream>
#include <map>

using namespace std;

int main(){
    
    string s; cin>>s;
    map<char, int> m;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=0 and s[i]<='9') m[s[i]]++;
    }
    for(auto c : m){
        cout<<c.first<<": "<<c.second<<endl;
    }
    
    return 0;
}