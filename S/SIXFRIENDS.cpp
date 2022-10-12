// https://www.codechef.com/problems/SIXFRIENDS

#include <iostream>
using namespace std;
 
int main()
{
    int i, t, x, y;
    cin>>t;
    for (i = 0; i<t; i++)
    {
        cin>>x>>y;
        int h = 3*x;
        int g = 2*y;
        if (h>g)
        cout<<g<<endl;
        else 
        cout<<h<<endl;
        
        
    }
    return 0;
}
