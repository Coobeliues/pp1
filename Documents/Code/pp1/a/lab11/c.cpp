#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, double> m;
    multimap<double, string> p;
    int n; cin>>n;
    double sum=0;
    for(int i=0; i<n; i++){
        string s; double x; cin>>s>>x;
        m[s]+=x;
        sum+=x;
    }
    for(auto c : m){
        c.second=c.second*100/sum;
        p.insert({c.second,c.first});   
    }

    for(auto it=p.rbegin(); it!=p.rend(); it++){
        cout<<(*it).second<<" "<<(*it).first<<"%\n";
    }

    return 0;
}