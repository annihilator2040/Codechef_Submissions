// https://www.codechef.com/problems/CCHOCOLATES

#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, z;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        int h = ((x*5)+(y*10))/z;
        cout<<h<<endl;
    }
    return 0;
}

