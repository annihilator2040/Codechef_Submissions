// https://www.codechef.com/problems/SCALENE

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if((a!=b)&&(a!=c)&&(b!=c))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
