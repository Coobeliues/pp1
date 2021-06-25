#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n; cin>>n;
    map<string, set<int>> m;
    for(int i=0; i<n; i++){
        string s; int x; cin>>s>>x;
        m[s].insert(x);
    }
    for(auto t : m){
        if(t.second.size()>=3) cout<<t.first<<" +1\n";
        else cout<<t.first<<" NO BONUS\n";
    }

    return 0;
}