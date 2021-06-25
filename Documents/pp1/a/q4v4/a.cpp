#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    int min=10000000, min2=10000000;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]  < min2){
            if(a[i]  < min) min=a[i];
            else min2 = a[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==min2) cnt++;
    }
    cout<<cnt;

    return 0;
}