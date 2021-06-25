#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int d=2; d>-n; d--){
        for(int i=0; i<n; i++){
            if(i+d<n and i+d>=0){
                cout<<a[i][i+d]<<" ";
            }
        }cout<<endl;
    }

    return 0;
}