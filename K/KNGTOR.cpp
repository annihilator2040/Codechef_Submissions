// https://www.codechef.com/problems/KNGTOR

#include <iostream>
using namespace std;
int main()
{
    int n, m, t, i ;
    cin>>t;
    for (i=0; i<t; i++ )
    {
        cin>>n>>m;
        int h = (n*5) +(m*7);
        cout<<h<<endl;
    }
    return 0;
}
