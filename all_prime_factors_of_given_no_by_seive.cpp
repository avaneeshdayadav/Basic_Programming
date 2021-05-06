
// Prime factors of a given number using seive.

#include <iostream>
using namespace std;
long long spf[1000000]; // Array where all numbers till 10^6 will have their smallest prime factor stored.

// Function that finds and store smallest prime factor of every number till 10^6.
void smallest_prime_factor_using_seive()
{
    for(long long i=2;i*i<=100000;i++)
    {
        for(long long j=i*i;j<=100000;j=j+i)
        {
            if(spf[j]>i)
                spf[j]=i;
        }
    }
}


int main()
{
    long long n;
    spf[0]=0;
    spf[1]=1;
	cin>>n;
	
	// Initializing each element with its own index number.
    for(long long i=0;i<100000;i++)
    {
        spf[i]=i;
    }
    
    smallest_prime_factor_using_seive(); // Calling smallest_prime_factor_using_seive() Function.
    
    
    while(n!=1)
    {
        cout<<spf[n]<<" ";  //Printing smallest prime factor for this no.
        n = n/spf[n];       //Updating n by dividing it with its smallest prime factor.
        
    }
    cout<<1<<endl;  //Including 1 in prime factors of given no.
    
	return 0;
}
