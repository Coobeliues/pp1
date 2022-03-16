#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin>>n;
    
    for(int i=0;i<n;i++){
        string s,t; cin>>s>>t;
        string str;
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());

        int sum= stoi(s)+stoi(t);

        str=to_string(sum);

        reverse(str.begin(), str.end());

        cout<<stoi(str)<<endl;
    }

    return 0;
}