#include <iostream>
#include <set>
#include <map>


using namespace std;

int main(){
    set<char> t1, t2, t3;
    map<char, int> m;

    string s1, s2, s3; cin>>s1>>s2>>s3;
    string a,b,c;
    for(int i=0; i<s1.size(); i++){
        t1.insert(s1[i]);
    }
    for(int i=0; i<s2.size(); i++){
        t2.insert(s2[i]);
    }
    for(int i=0; i<s3.size(); i++){
        t3.insert(s3[i]);
    }
    
    for(auto i : t1){
        a.push_back(i);
    }
    for(auto i : t2){
        b.push_back(i);
    }
    for(auto i : t3){
        c.push_back(i);
    }
    for(int i=0; i<15; i++){
        m[a[i]]++;
        m[b[i]]++;
        m[c[i]]++;
    }
    for(auto i:m){
        if(i.second>1) cout<<i.first<<" ";
    }

    
	return 0;
}
