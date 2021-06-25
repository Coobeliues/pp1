#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    set<string> shop, res;
    multimap<string, string> combine;
    int n; cin>>n;

    while(n--){
        string ngri; cin>>ngri;
        shop.insert(ngri);
    }
    int m; cin>>m;
    while(m--){
        string s1, s2; cin>>s1>>s2;
        combine.emplace(s1, s2);
    }
    string hav; cin>>hav;
    
    for(auto i : combine){
        if(i.first==hav){
            if(shop.find(i.second)!=shop.end()) res.insert(i.second);
        }
        if(i.second==hav){
            if(shop.find(i.first)!=shop.end()) res.insert(i.first);
        }
    }

    cout<<res.size()<<endl;
    for(auto i : res){
        cout<<i<<" ";
    }

    return 0;
}