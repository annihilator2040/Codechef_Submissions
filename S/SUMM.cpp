// https://www.codechef.com/problems/SUMM

#include <iostream>
using namespace std ;

int main()
{
    int t, i, a, b, c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        int h = a+b;
        if(h==c)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
        
    }
    return 0 ;
}
