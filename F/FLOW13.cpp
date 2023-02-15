// https://www.codechef.com/LP0TO101/problems/FLOW013

#include <iostream>
using namespace std;

int main() 
{
    int a, b, t, i, c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        int h = a+b+c;
        if (h==180)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
	return 0;
}
