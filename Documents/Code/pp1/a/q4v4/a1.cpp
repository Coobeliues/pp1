#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> m;
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
        m[a[i]]++;
    }
    for(auto i : m){
        if(i.first==min2) cout<<i.second;
    }

    return 0;
}