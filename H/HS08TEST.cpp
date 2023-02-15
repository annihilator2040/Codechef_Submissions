// https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std ;

int main()
{
    int x;
    float y;
    cin>>x>>y;
    if ((x%5)==0 && (x<y))
    {
        float h = (y - (x+ 0.50));
        cout<<h<<endl;
    }
    else
    cout<<y<<endl;
    
    return 0 ;
}
