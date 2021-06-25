#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int n, k; cin>>n>>k;
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(n%i==0) v.push_back(i);
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(i+1==k){
            cout<<v[i];
            return 0;
        }
    }
    return 0;
}