#include <iostream>

using namespace std;

int i=0,j=0;

int f1(int a[]){
    int b =a[i]|(a[i]+1);
    i++;

    return b;
}
int f2(int a[]){
    int c =a[j]&(a[j]+1);
    j++;

    return c;
}

int main(){
    int n; cin>>n; int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<f1(a)<<" ";
    }cout<<endl;
    for(int i=0;i<n;i++){
        cout<<f2(a)<<" ";
    }

    return 0;
}