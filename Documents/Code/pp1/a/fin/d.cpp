#include <iostream>
#include <set>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double n; cin>>n; 
    set<pair<double, pair<string, string>>> m;
    
    for(double i=0;i<n;i++){
        double allxkr=0;
        double sumk=0;
        string s, t; double xz; 
        cin>>s>>t>>xz;
        double sol;
        for(int j=0;j<xz;j++){
            string k; double x; cin>>k>>x;

            double d;
            if(k=="A+") d=4;
            else if(k=="A") d=3.75;
            else if(k=="B+") d=3.5;
            else if(k=="B") d=3;
            else if(k=="C+") d=2.5;
            else if(k=="C") d=2;
            else if(k=="D+") d=1.5;
            else if(k=="D") d=1;
            else d=0;

            sumk+=x;
            allxkr=allxkr+(d*x);

            sol=allxkr/sumk;
        }
        
        
        m.insert(pair<double, pair<string, string>>(make_pair(sol, make_pair(s, t))));
    }

    set<pair<double, pair<string, string>>> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).second.first<<" "<<(*it).second.second<<" "<<setprecision(3)<<fixed<<(*it).first<<endl;
    }

    return 0;
}