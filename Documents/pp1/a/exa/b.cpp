#include <iostream>

using namespace std;


int main(){
	int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }int x,y; cin>>x>>y;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]%x==0 and a[i]%y!=0){
            cout<<a[i]<<endl;
            cnt++;
        }
        
    }
    if(cnt!=0) return 0;
    else cout<<-1;
    
	return 0;
}
