#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, double> grading = {{"A+", 4.00}, {"A", 3.75}, 
                                    {"B+", 3.50}, {"B", 3.00}, 
                                    {"C+", 2.50}, {"C", 2.00}, 
                                    {"D+", 1.50}, {"D", 1.00},
                                    {"F", 0} };

    set <pair<double, pair<string, string> > > st;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        double sum_of_credits = 0, sum_of_gc = 0;
        string surname, name; int k;
        cin >> surname >> name >> k;
        double gpa;
        for(int j = 0; j < k; ++j){
            string grade; int credits;
            cin >> grade >> credits;
            sum_of_credits += credits;
            sum_of_gc += grading[grade] * credits;
            gpa = sum_of_gc / sum_of_credits;
        }
        st.insert({gpa, make_pair(surname, name)});
    }
    for(auto i : st){
        cout << i.second.first << " " << i.second.second << " " << setprecision(3) << fixed << i.first << endl;
    }

    return 0;
}