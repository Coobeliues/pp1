#include <iostream>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0, cnt=0; 
    while(l<n){
        int max=-1111111; 
        int indmx=-1; 
        for(int i=l;i<n;i++){
            if(a[i]>=max){
                max=a[i]; 
                indmx=i;
            }
        }  
        l=indmx+1;
        cnt++;
    }

    cout<<cnt;

    return 0;
}