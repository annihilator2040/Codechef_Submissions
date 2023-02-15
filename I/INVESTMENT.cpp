// https://www.codechef.com/problems/INVESTMENT

#include <iostream>
using namespace std;
int main()
{
    int x, y, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y;
        if(x>=2*y)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
        
    }
    return 0;
}
