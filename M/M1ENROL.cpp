// https://www.codechef.com/problems/M1ENROL

#include <iostream>
using namespace std ;

int main()
{
    int x, y, t, i ;
    cin>>t;
    for (i=0; i<t; i++)
    {
        cin>>x>>y;
        if (x>=y)
        cout<<0<<endl;
        else
        {
            int h = y-x;
            cout<<h<<endl;
            
        }
        
    }
    return 0;
}
