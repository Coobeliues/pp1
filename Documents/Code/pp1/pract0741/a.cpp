#include <iostream>
#include <map>

using namespace std;

int main(){
    int n; cin>>n;
    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string s, a;
        cin >> s >> a;
        if (mp.find(s) == mp.end()) mp[s] = 1;
        else mp[s]++;
    }

    map<string, int> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " is ";
        if (it->second < 3) cout << "valid" << endl;
        else cout << "hacked" << endl;
    }

    for (auto &i : mp) {
        if (i.second >= 3) cout << i.first << " is valid" << endl;
        else cout << i.first << " is hacked" << endl;
    }

    return 0;
}