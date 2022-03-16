#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]<0) return 0;
        else if(a[i]>a[i+1]) return 0;
    }

    int cnt=0;
    for(int i=1;i<n-1;i+=2){
        if(a[i+1]-a[i]>=3) cnt++;
    }

    cout<<cnt;

    return 0;
}