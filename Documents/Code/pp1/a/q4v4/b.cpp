#include <iostream>
#include <map>

using namespace std;

int main(){
    string s; getline(cin, s);
    int n; cin>>n;
    cout<<s.substr(n,s.size());


    return 0;
}