#include <iostream>

using namespace std;

int main(){
    int n,m; cin>>n>>m; 
    int ans=0;
    for(int i=0;i<n-1;i++){
        int x; cin>>x;
        int cnt=0;
        for(int j=0;j<m;j++){
            int y; cin>>y;
            if(y==0) cnt++;
        }
        if(cnt%n==0) ans+=cnt/n;
    }

    cout<<ans;

    return 0;
}