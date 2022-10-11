// https://www.codechef.com/problems/SEMCOURSES

#include <iostream>
using namespace std ;

int main()
{
    int x, y, t, i, z ;
    cin>>t;
    for (i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        int h = x*y*z;
        cout<<h<<endl;
    }
    return 0;
}
