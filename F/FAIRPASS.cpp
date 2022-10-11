// https://www.codechef.com/problems/FAIRPASS

#include <iostream>
using namespace std;

int main()
{
    int n, k, T, i;
    cin>>T;
    for (i=0; i<T; i++)
    {
        cin>>n>>k;
        if (k>n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
