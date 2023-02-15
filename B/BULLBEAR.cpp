// https://www.codechef.com/problems/BULLBEAR

#include <iostream>
using namespace std ;

int main()
{
    int t, i, x, y, h;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y;
        if (x>y)
        cout<<"LOSS\n";
        else if (y>x)
        cout<<"PROFIT\n";
        else
        cout<<"NEUTRAL\n";
        
        
    }
    return 0 ; 
}
        
