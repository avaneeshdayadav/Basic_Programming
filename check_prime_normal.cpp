#include<bits/stdc++.h>
using namespace std;


void solve()
{
  // Check prime by for looping only upto sqrt(given_num).
  long long n;
  bool flag=1;
  cin>>n;
  
  for(long long i=2; i<=sqrt(n); i++)
  {
    if(n % i == 0)
    {
      flag = 0;
      break;
    }
  }
  
  
  if(flag == 1)
    cout<<"Prime"<<endl;
  else
    cout<<"Not Prime"<<endl;
    
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
        solve();
}
