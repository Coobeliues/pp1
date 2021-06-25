#include <iostream>
#include <set>

using namespace std;

int main () {
    int n, m; cin >> n>>m;

    while (n<=m) {
        string s = to_string (n);
        set<char> st;
        for (auto i : s) st.insert (i);
        
        if (st.size () == s.size ()) {
            cout << n;
            return 0;
        }   
        n++;
    }
    cout<<"Understandable, have a great day";
    return 0;
}