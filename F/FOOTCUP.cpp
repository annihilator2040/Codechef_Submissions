// https://www.codechef.com/problems/FOOTCUP

#include <iostream>
using namespace std ;

int main()
{
    int t, i, x, y;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y;
        int h = x+y;
        if((x==y)&&(h!=0))
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
    return 0 ;
}
