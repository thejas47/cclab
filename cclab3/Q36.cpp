#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s=1;
  while(n)
  {
    s*=n%10;
    n/=10;
  }
  cout<<s;
  return 1;
}
