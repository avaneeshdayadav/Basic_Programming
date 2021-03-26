#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(long long n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (long long p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (long long p = 2; p <= n; p++)
        if (prime[p])
            cout << p << endl;
}
 
// Driver Code
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    long long n = 1000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
         
    SieveOfEratosthenes(n);
    
    
    return 0;
}
