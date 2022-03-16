#include <iostream>
#include <set>
#include <vector>

using namespace std;


int main(){
    set<char> e;
    vector<char> v;
	string s,t, k; cin>>s>>t>>k;
    string alph="abcdefghijklmnopqrstuvwxyz";
    string gol="";
    for(int i=0; i<s.size(); i++){
        e.insert(s[i]);
        e.insert(t[i]);
        e.insert(k[i]);
    }
    for(auto u : e){
        gol.push_back(u);
    }
    for(int i=0; i<26; i++){
        for(int j=0; j<gol.size(); j++){
            if(gol[j]==alph[i]) alph.erase(i,1);
        }
    }
    for(int i=0; i<alph.size(); i++){
        cout<<alph[i];
    }
	return 0;
}
