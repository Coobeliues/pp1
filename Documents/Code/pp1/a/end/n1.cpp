#include <iostream>
#include <algorithm>

using namespace std;

bool isp(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}

int main(){
    string s; cin>>s;
    
    sort(s.begin(),s.end());

    do{
        if(isp(s)){
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));

    cout<<"JOJO";

    return 0;
}