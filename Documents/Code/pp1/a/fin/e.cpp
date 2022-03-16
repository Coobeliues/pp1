#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
int main(){
    map <string, string> combos;
    set <string> shop_stock, sorted_result;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        shop_stock.insert(s);
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; ++i){
        string s1, s2;
        cin >> s1 >> s2;
        combos.insert({s1, s2});
    }
    string ingredient;
    cin >> ingredient;
    for(auto i : combos){
        if(shop_stock.find(ingredient) != shop_stock.end()){
            if(i.first == ingredient){
                sorted_result.insert(i.second);
            }
            if(i.second == ingredient){
                sorted_result.insert(i.first);
            }
        }
    }
    if(shop_stock.find(ingredient) == shop_stock.end()){
        cout << 0 << endl;
    } else {
        cout << sorted_result.size() << endl;
        for(auto i : sorted_result){
            cout << i << " ";
        }
    }
    return 0;
}