#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    map<string,string> m;
    multimap<string,string> m1;
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        string s, t; cin >> s >> t;

        if(m.find(s)==m.end()) m[t]=s;
        else{
            m[t]=m[s];
            m.erase(s);
        }
    }
    for(auto i : m){
        m1.insert(make_pair(i.second, i.first));
    }

    cout << m1.size() << endl;
    for(auto i : m1){
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}