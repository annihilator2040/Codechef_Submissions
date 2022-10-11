// https://www.codechef.com/problems/POPULATION

#include <iostream>
using namespace std ;

int main(){
    int x, y, z, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        int h = ((x+z)-y);
        cout<<h<<endl;
    }
}
