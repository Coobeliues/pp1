#include <iostream>

using namespace std;

bool natural(int a){
    int c=0;
    for (int i=1; i<=a; i++)
        if (a %4 == 0) c++;
        
    return c;
}

int summa(int a){
    int sum = 0;
    while (a>0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}

int main() {
    int n, cnt;cin >> n;
    if(n>0){
        cnt=0;
        for(int i=1;i<=n;i++) {
            if(natural(summa(i))) cnt++;
        }
        cout << cnt << endl;
    } 
    return 0;
}