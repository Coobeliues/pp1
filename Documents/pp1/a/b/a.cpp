#include <iostream>

using namespace std;

int f(int a[], int n, int k, int i, int cnt){
    if(a[i]>=k) f(a,n,k,i++,cnt++);
    else f(a,n,k,i++,cnt);

    return cnt;
}

int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k; cin>>k;
    
    cout<<f(a,n,k,0,0);

    return 0;
}