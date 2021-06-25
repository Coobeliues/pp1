#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin>>n;
    map<pair<string, string>, int> m;
    for(int i=0; i<n; i++){
        string s,t; cin>>s>>t;
        int sum=0, cnt=0;
        for(int j=0; j<4; j++){
            int x; cin>>x;
            if(x==0) cnt++;
            sum+=x;
        }
        m.insert({make_pair(s,t), sum});
        if(cnt>n/2);
    }
    vector<pair> v;
    copy(m.begin(),m.end(),std::back_inserter<vector<pair>>(v));
    sort(vec.begin(), vec.end(),[](const pair &l, const pair &r){
        if (l.first.second != r.first.second) {
            return l.first.second < r.first.second;
        }
        return l.first.second < r.first.second; });

    for (auto const &pair: v) {
        cout  << pair.first.second << endl;
    }

    // map<pair<string, string>, int>:: reverse_iterator i;
    // for(i=m.rbegin(); i!=m.rend(); i++){
    //     if((*i).second>20){
            
    //         cout<<(*i).first.second<<endl;
            
    //     }
    // }
    // for(auto i : m){
    //     if(i.second>20){
    //         cout<<i.first.second<<endl;
            
    //     }
    // }
    
    return 0;
}