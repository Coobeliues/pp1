#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool primera(int n){
  for(int i =2; i<n; i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main () {
    vector<int> v;
  	int n; cin>>n; int a[n][n];
    for(int i=0; i<n; i++){
      for(int j =0; j<n; j++){
        cin>>a[i][j];
      }
    }
    for(int i=0; i<n; i++){
      for(int j =0; j<n; j++){
        if(primera(a[i][j])){
          v.push_back(a[i][j]);
        }
      }
    }
    sort(v.begin(), v.end());
    cout<<v[v.size()-1];

    return 0;
}