//https://www.codechef.com/problems/TASTEDEC


#include <iostream>
using namespace std;
 int main()
 {
    int t, i, x, y;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y;
        if ((x*2)>(y*5))
        cout<<"chocolate\n";
        else if ((x*2)<(y*5))
        cout<<"candy\n";
        else 
        cout<<"either\n";
    }
     return 0;
 }
