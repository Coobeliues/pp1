#include <iostream>

using namespace std;

int main(){
    string s, t; cin>>s>>t;
    int p=0;
    for(int i=0; i<s.size(); i++){
        int f=s.find(t,p);
        if(f!=string::npos){
            p=f+1;
            cout<<f<<" ";
        }
    }

    return 0;
}