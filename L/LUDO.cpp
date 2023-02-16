// https://www.codechef.com/problems/LUDO

#include <iostream>
using namespace std;
int main(){
    int i, t, x;
    cin>>t;
    for(i=0; i<t;i++){
        cin>>x;
        if(x==6)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    return 0;
}
