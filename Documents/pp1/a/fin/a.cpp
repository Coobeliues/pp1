#include <iostream>
#include <map>

using namespace std;

int main(){
    int a,b,c,d,e,f,g; cin>>a>>b>>c>>d>>e>>f>>g;

    map<int, int, greater<int>> nap;
    map<int, int, greater<int>> gret;

    nap[1]=a; nap[2]=b; nap[5]=c; nap[10]=d; nap[20]=e; nap[50]=f; nap[100]=g;            
    gret=nap;

    int x; cin>>x;
    while(x--){
        int add; cin>>add;
        bool truth=false;
        for(auto aut : nap){
            while(nap[aut.first]>0 && add-aut.first>=0){
                add=add-aut.first;
                nap[aut.first]--;
            }
            if(add==0){
                cout<<"Transaction accepted!"<<endl;
                truth=true;
                gret=nap; break;
            }
        }
        if(!truth){
            nap=gret;
            cout<<"Transaction stopped!"<<endl;
        }
    }

    return 0;

}