#include <iostream>

using namespace std;

int main(){
    int n, x ,y; cin>>n>>x>>y;

    if ((n - x) + (n - y) < x + y){
        cout<<(n - x) + (n - y);
    } else {
        cout<<x + y;
    }

    return 0;
}