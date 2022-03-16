#include<iostream>
 
using namespace std;
 
int main(){
	string a; cin>>a;
	int s=a.size();
		
	for(int i=0;i<s;++i){
		for(int j=i+1;j<s;){
			if(a[i]==a[j]){
				for(int k=j;k<s-1;++k){
					a[k]=a[k+1];
                }
				s--;
			}
			else ++j;
		}
    }

	for(int i=0;i<s;++i) cout<<a[i];
 
	return 0;
}