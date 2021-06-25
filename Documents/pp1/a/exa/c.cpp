#include <iostream>

using namespace std;


int main(){
	int n; cin>>n; char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    } int sum=0;
    for(int i=0; i<n; i++){
        sum+=int(a[i]);
    }
    cout<<sum;
    
	return 0;
}
