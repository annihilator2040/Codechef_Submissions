// https://www.codechef.com/problems/DETSCORE

#include <iostream>
using namespace std;
 
int main()
{
    int t, x, n, i;
    cin>>t;
    for (i=0; i<t; i++)
    {
        cin>>x>>n;
        int h = (x/10)*n;
        cout<<h<<endl;
    }
    return 0;
}
