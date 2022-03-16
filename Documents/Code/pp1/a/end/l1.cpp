#include <bits/stdc++.h>

using namespace std;

int main(){
    set<char> stc;
    map<char,int> m;
    bool ok=false;
    int n; cin >> n;

    for(int i=0;i<n;i++){
        string s; cin >> s;
        for(int j=0;j<s.size();j++){
            stc.insert(s[j]);
        }
        for(auto c : stc){
            m[c]++;
        }
        stc.clear();
    }
    for(auto it : m){
        if(it.second>=n){
            cout << it.first << " ";
            ok = true;
        }
    }
    if(!ok){
        cout << "NO COMMON CHARACTERS";
        return 0;
    }

    return 0;
}