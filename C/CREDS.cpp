// https://www.codechef.com/problems/CREDS

#include <iostream>
using namespace std ;

int main()
{
    int x, y, z, T, h, j, k, i;
    cin>>T;
    for (i=0 ; i<T; i++)
    {
        cin>>x>>y>>z;
        h = 4*x;
        j = 2*y;
        k = h+j;
        cout<<k<<endl;
        
    }
    return 0;
}
