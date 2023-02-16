// https://www.codechef.com/problems/READPAGES

#include <iostream>
using namespace std ;

int main()
{
    int t, i, x, y, n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>x>>y;  
        int h = x*y;
        if(h>=n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0 ;
}
