#include <iostream>
using namespace std;

int main()
{
    
    /*
        Imp Note Points :
        1) If a number is power of 2 then it has only one set bit which is leftmost bit.
        2) If we invert all the bits of n starting from rightmost set bit then we get n-1. 
            e.g 6 = 0110 so 5 = 0101.
        3) If we apply & on n and n-1 then every bit is same as bits of n except the rightmost bit in n is inverted in answer.
            If n was power of 2 then n & n-1 is 0 else some other number.
        4) So to count no. of 1's in a binary no, we keep on anding no with n-1 and increment the count variable till n becomes zero.
        5) In each anding we r actually unsetting a set rightmost set bit.
    */
    int n,count=0,temp;
    cin>>n;
    temp = n;
    
    while(n)
    {
        n = (n & n-1);
        count++;
    }
    
    cout<< "No of 1's in "<<temp<<"'s binary representation is "<<count<<endl;
  
  
  return 0;
}
