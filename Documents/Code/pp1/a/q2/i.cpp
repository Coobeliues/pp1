#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s; cin>>s;
    int x=0, y=0;
    for(int i=0; i<s.size(); i++){
        
        if(s[i]=='B') y--;
        else if(s[i]=='F') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
        
    }
    if(y>0){
        for(int i=0; i<y; i++){
            cout<<'B';
        }
    }else {
        for(int i=0; i<abs(y); i++){
            cout<<'F';
        }
    }
    if(x>0){
        for(int i=0; i<x; i++){
            cout<<'L';
        }
    }else {
        for(int i=0; i<abs(x); i++){
            cout<<'R';
        }
    }

    return 0;
}