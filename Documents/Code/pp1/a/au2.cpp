#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    int max=-111111;
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    cout<<max;

}