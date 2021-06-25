#include <iostream>
#include <map>

using namespace std;

int main(){
    map<pair<int, int>, int> m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        if(x>y) swap(x,y);
        m[make_pair(x,y)]++;
        cout<<m[{x,y}]-1<<endl;
    }
    
    return 0;
}