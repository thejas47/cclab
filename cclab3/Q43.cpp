#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    if(!(n%i)) cout<<i;
  }
  return 1;
}
