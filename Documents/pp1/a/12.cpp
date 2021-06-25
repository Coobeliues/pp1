#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n; cin>>n; int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    double min=1111111;
    double max=-1111111;

    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }

    double m=1+3.322*(log10(n));
    double k=(max-min)/m;
    
    cout<<"k: "<<k<<endl;
    cout<<"m: "<<m<<endl;
    cout<<"max: "<<max<<" --- min: "<<min<<endl;

    double kk; cin>>kk;
    double mn=min+kk;
    while(min<=max){
        
        cout<<min<<" "<<mn<<endl;
        min+=kk;
        mn+=kk;

    }

    return 0;
}