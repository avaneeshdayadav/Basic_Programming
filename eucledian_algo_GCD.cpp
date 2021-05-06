
//  Finding GCD by Eucledian Algorithm both by using - and % operator.

//  GCD algorithm has worst case time complexity when both P and Q are prime numbers.
//  The worst case time complexity is O(log2 max(Q, P)).

#include <iostream>
using namespace std;

// Less efficient than using % operator
long long GCD_by_substraction(long long m,long long n) //reccursive function
{
    // Everything divides 0
    if (m == 0)
       return n;
    if (n == 0)
       return m;
    
    // Base condition
    if(m==n)
        return m;
        
    // call GCD_by_substraction(diff_of_m&n,smallest_of_m&n);
    if(m>n)
        GCD_by_substraction(m-n,n);
    else
        GCD_by_substraction(n-m,m);
}


// More efficient than using - operator.
long long GCD_by_modulo(long long m, long long n) // reccursive function
{
    // Everything divides 0
    if (m == 0)
       return n;
    if (n == 0)
       return m;
       
    // Base condition
    if(m==0)
        return n;
    GCD_by_modulo(n%m,m);
}

int main()
{
    long long m,n;
    cin>>m>>n;
    cout<<GCD_by_modulo(m,n)<<endl;
    cout<<GCD_by_substraction(m,n)<<endl;
    
    
}
