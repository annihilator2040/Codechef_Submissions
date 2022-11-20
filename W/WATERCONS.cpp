// https://www.codechef.com/problems/WATERCONS

#include <iostream>
using namespace std;

int main()
{
    int x, t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x;
        if(x>=2000)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}
