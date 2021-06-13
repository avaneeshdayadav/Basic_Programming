#include <iostream>
using namespace std;

int main() {
    
    /*
        Imp Note Points :
        1) If a number is power of 2 then it has only one set bit which is leftmost bit.
        2) If we invert all the bits of n starting from rightmost set bit then we get n-1. 
            e.g 6 = 0110 so 5 = 0101.
        3) If we apply & on n and n-1 then every bit is same as bits of n except the rightmost bit in n is inverted in answer.
            If n was power of 2 then n & n-1 is 0 else some other number.
    */
    int n;
    cin>>n;
    
    if(n==0)
        cout<<"Not a power of 2"<<endl;
    else if (!(n & n-1))
        cout<<"Yes, power of 2"<<endl;
    else
        cout<<"Not a power of 2"<<endl;


return 0;
}
