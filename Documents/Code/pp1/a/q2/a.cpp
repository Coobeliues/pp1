#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int cnt=0;
    for(int i=a[0]; i<=a[n-1]; i++){
        cnt++;
    }
    
    cout<<cnt-n;

    return 0;
}