// https://www.codechef.com/problems/FLOW002



#include<iostream>
using namespace std;
int main(){
    int a, b, t, i , h;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        h = a%b;
        cout<<h<<endl;
    }

     return 0;
}
