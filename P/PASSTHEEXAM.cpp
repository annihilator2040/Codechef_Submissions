// https://www.codechef.com/problems/PASSTHEEXAM

#include <iostream>
using namespace std ;

int main()
{
    int a, b, c, t, i, h;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        h = a+b+c;
        if(h>=100)
        {
            if((a>=10)&&(b>=10)&&(c>=10))
            cout<<"PASS\n";
            else 
            cout<<"FAIL\n";
        }
    else
    cout<<"FAIL\n";
    }
    return 0 ;
}
