
// Find sum of no.of num's divisible by a,b and both, in range of n.

#include <iostream>
using namespace std;

int main()
{
    long long a,b,c1,c2,c3,n;
    cin>>n>>a>>b;
    
    c1 = n/a;
    c2 = n/b;
    c3 = n/(a*b);
    
    cout<<c1+c2-c3<<endl;
    
}
