#include <iostream>

using namespace std;

int main(){

    double n,m; cin>>n>>m;
    double k=n-m;
    double cn=1,cm=1,mc=1;
    double sn=0,sm=0,ms=0;
    for(double i=2;i<=n;i++){
        cn*=i;
        sn+=cn;
    }
    for(double i=2;i<=m;i++){
        cm*=i;
        sm+=cm;
    }
    for(double i=2;i<=k;i++){
        mc*=i;
        ms+=mc;
    }
    cout<<fixed<<cn/(cm*mc);

    return 0;
}