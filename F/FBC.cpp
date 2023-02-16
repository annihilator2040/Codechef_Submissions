// https://www.codechef.com/problems/FBC

#include <iostream>
using namespace std ;

int main()
{
    int x, k, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>k>>x;
        int h = k-x;
        cout<<h<<endl;
    }
    return 0 ;
}
