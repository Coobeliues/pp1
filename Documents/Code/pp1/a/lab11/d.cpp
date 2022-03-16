#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, m; cin>>n >>m; int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            if(i+1==n or j+1==m) break;
            if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 or a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==0 && a[i+1][j+1]==0){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";

    return 0;
}