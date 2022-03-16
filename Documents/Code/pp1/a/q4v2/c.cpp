#include <iostream>
#include <vector>

using namespace std;

bool primary (int value) {
    if (value < 2) return false;
    
    for (long long i = 2; i * i <= value; i++) {
        if(value % i == 0) return false;
    }   
    return true;
}

int main () {
    int n; cin >> n;
    vector<int> v,v2;

    for (int i = 2; i <= 121212; i++)
        if (primary(i)) v.push_back(i);
    
    for (int i = 0; i < v.size (); i++)
        if (primary(i + 1)) v2.push_back (v[i]);

    cout << v2[n -1];

    return 0;
}