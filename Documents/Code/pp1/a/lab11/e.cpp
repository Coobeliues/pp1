#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    set<char> t;
    map<char, int> m;
    int n; cin>>n;
    bool p=false;

    for(int i=0; i<n; i++){
        string s; cin>>s;
        for(int j=0; j<s.size(); j++){
            t.insert(s[j]);
        }
        for(auto k : t){
            m[k]++;
        }
        t.clear();
    }
    
    for(auto i : m){
        if(i.second>=n){
            cout<<i.first<<" ";
            p=true;
        }
    }
    if(!p) cout<<"NO COMMON CHARACTERS";

    return 0;
}