#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    freopen("file.txt", "r", stdin);
    freopen("res.txt", "w", stdout);

    string s; map<string, int> m;

    while(cin>>s){
        m[s]++;
    }
    for(auto i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    return 0;
}