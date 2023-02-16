// https://www.codechef.com/problems/TAXSAVING

#include <iostream>
using namespace std;
int main()
{
    int i, x, y, t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        int h = x-y;
        cout<<h<<endl;
    }
    return 0;
}
