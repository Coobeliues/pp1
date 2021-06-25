#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    int n, m; cin>> n>> m; char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]='X';
        }
    }
    a[0][0]='*';
    int i=0, j=0;
    int temp=0;
    
    while(temp<s.size()){
        if(s[temp]=='U'){
            i--; a[i][j]='*';
        }
        else if(s[temp]=='D'){
            i++; a[i][j]='*';
        }
        else if(s[temp]=='R'){
            j++; a[i][j]='*';
        }
        else if(s[temp]=='L'){
            j--; a[i][j]='*';
        }
        temp++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j];
        }cout<<endl;
    }

    return 0;
}