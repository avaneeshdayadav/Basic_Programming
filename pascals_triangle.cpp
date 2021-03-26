    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    #define PB push_back 
    
    
    // NOTE : This func can find factorial upto n=20.
    long long fact(long long n)
    {
        long long ans=1;
        for(long long i=2;i<=n;i++)
        {
            ans*=i;
        }
        return ans; // Here even if n=1 or n=0 ans returned is 1 automatically
    }
    
    
    long long nCr(long long n, long long r)
    {
       return (fact(n)/(fact(r)*fact(n-r))) ;
    }
    
    
    void pascal()
    {   
       // Print Pascal's triangle.
       long long N;
       cin>>N;
       
       if(N<0 || N>20)
       {
           cout<<"value of N should be in between 0 and 20 including"<<endl;
           return;
       }
       for(long long i=0; i<=N; i++)
       {
           for(long long j=0; j<=i; j++)
           {
               cout<<nCr(i,j)<<" ";
           }
           cout<<endl;
       }
       
       cout<<endl;
       
    }
    
    int main()
    {
        auto t1 = std::chrono::high_resolution_clock::now();
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        
        int t=1;
        cin>>t;
    
        while(t--)
        {
            pascal();
        }
        auto t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        cerr<<duration<<" micro sec";
      
        return 0;     
    }
    
