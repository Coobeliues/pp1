#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void remove(vector<char> &v){
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
    v.erase(end, v.end());
}
 
int main(){
    vector<char> v;
    string s; cin>>s;
    
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    remove(v);
 
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it;
    }
 
    return 0;
}