#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int all[1001];
    for(int i=0; i<1001; i++){
        all[i]=0;
    }
    int max=-1111;

    for(int i=0; i<n; i++){
        all[a[i]]++;
        if(all[a[i]]>max) max=all[a[i]];
    }
    for(int i=1000; i>=0; i--){
        if(max==all[i]) cout<<i<<" ";
    }

    return 0;
}