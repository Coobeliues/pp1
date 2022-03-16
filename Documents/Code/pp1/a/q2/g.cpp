#include <iostream>
#include <string>

using namespace std;

int main(){

    string str; cin >> str;
    string text = "";

    for(int i = 0; i < str.size(); i++){
        bool p=false;
        for(int j = i + 1; j <= str.size(); j++){
            if(str.find(str[i]) != i) p= true;
        }
        if(p) text += str[i];
    }

    cout << text << endl;



    return 0;
}