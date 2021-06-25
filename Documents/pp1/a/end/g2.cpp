#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    vector<char> v;
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }

    unordered_set<char> us(v.begin(), v.end());
    v.assign(us.begin(), us.end());
 
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it;
    }
 
    return 0;
}