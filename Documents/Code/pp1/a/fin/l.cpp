#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; ++i){
        int min = 100000000;
        int n; cin >> n; int a[n];
        for(int j = 0; j < n; ++j) cin >> a[j];
        
        for(int j = 0; j < n; j++){
            if(count(a, a + n, a[j]) == 1 and a[j] < min) min = a[j];
        }
        for(int j = 0; j < n; j++){
            if(a[j] == min) cout << j + 1 << endl;
        }
        if(min == 100000000){
            cout << "ZA WARUDO" << endl;
        }
    }
    
    return 0;
}