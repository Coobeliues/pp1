#include <iostream>

using namespace std;

int main(){
    long long n; cin>>n; char a[2*n][4*n-1];
    for(long long i=1; i<=2*n; i++){
        for(long long j=1; j<4*n; j++){
            a[i][j]=' ';
        }
    }
    for(long long i=1; i<=2*n; i++){
        for(long long j=1; j<=4*n-1; j++){
            if(i+j==2*n+1) a[i][j]='*';
            if(j-i==2*n-1) a[i][j]='*';
            if(i-j==1 and i>n+1 and j>n) a[i][j]='*';
            if(j+i==4*n+1 and i>n and j<3*n) a[i][j]='*';
            if((i*j)%(2*n)==0 and i==2*n) a[i][j]='*';
            if((i*j)%n==0 and i==n ){
                if(j>=n+2 and j<=3*n-2) a[i][j]='*';
            }
        }
    }
    a[2*n][2*n]=' ';
    for(long long i=1; i<=2*n; i++){
        for(long long j=1; j<4*n; j++){
            cout<<char(a[i][j]);
        }cout<<endl;
    }

    return 0;
}