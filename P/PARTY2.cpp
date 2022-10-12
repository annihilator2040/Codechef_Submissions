// https://www.codechef.com/problems/PARTY2

#include <iostream>
using namespace std ;

int main(){
    int n, x, k, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>x>>k;
        int h= n*x;
        if (k>=h)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
