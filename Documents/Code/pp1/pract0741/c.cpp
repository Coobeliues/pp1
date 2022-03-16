#include <iostream>
#include <map>

using namespace std;

int main(){
    string s; cin>>s;
    map<char, int> m;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' and s[i]<='D') m[s[i]]++;
    }
    for(auto it = m.cbegin(); it != m.cend(); ++it)
    {
        std::cout << it->first << " " << it->second  << "\n";
    }

    return 0;
}