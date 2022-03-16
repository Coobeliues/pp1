#include <iostream>
#include <set>

using namespace std;

int main () {
    int n; cin >> n;

    while (true) {
        ++n;
        string s = to_string (n);
        set<char> st;
        for (auto i : s) st.insert (i);
        
        if (st.size () == s.size ()) {
            cout << n;
            break;
        }
    }

    return 0;
}