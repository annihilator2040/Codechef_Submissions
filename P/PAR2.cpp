// https://www.codechef.com/problems/PAR2

#include <iostream>
using namespace std ;
int main()
{
    int n, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        if((n%2)==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}
