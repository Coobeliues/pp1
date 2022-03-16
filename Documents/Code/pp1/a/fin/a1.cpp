#include <iostream>

using namespace std;

int main(){
    int arr[7] = {1, 2, 5, 10, 20, 50, 100};
    int sum = 0;
    for(int i = 0; i < 7; i++){
        int n; cin >> n;
        for(int j = 0; j < n; j++){
            sum += arr[i];
        }
        cout<<sum<<" ";
    }
    int m; cin >> m;
    string res[m];
    for(int i = 0; i < m; i++){
        int n; cin >> n;
        if(n < sum){
            res[i] = "Transaction accepted!";
            sum -= n;
        }
        else{
            res[i] = "Transaction stopped!";
        }
    }
    for(int i = 0; i < m; i++){
        cout << res[i] << endl;
    }
    return 0;
}