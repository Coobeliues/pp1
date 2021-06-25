#include <iostream>

using namespace std;

int f(int a, int b){
    if(a%b==0) return a/b;
    else return a/b+1;
}

int main(){
    int a,b; cin>>a>>b;
    
    cout<<f(a, b);

    return 0;
}