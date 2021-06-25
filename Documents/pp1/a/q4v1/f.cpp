#include <iostream>

using namespace std;

int main () {
    string s, res;
    int mx=-1111111;
    while (cin >> s) {
        if (s.size () > mx) {
            mx = s.size ();
            res = s;
        }
    }

    cout << res;

    return 0;
}