// https://www.codechef.com/problems/FEVER

#include <iostream>
using namespace std;

int main()
{
  int x, t, i;
  cin>>t;
  for (i=0; i<t; i++)
  {
      cin>>x;
      if (x>98)
      cout<<"Yes"<<endl;
      else 
      cout<<"No"<<endl;
  }
}
