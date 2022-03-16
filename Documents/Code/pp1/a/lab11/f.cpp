#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a, b, k; cin>>a>>b>>k;
    vector<int> t;
    
    int mx=max(a, b);
    for(int i=1; i<=mx; i++){
        if(a%i==0 and b%i==0) t.push_back(i);
    }
    cout<< t[t.size()-k];

    return 0;
}