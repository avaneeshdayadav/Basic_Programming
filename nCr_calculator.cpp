    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    #define PB push_back 
    
    long long fact(long long n)
    {
        long long ans=1;
        for(long long i=2;i<=n;i++)
        {
            ans*=i;
        }
        return ans; // Here even if n=1 or n=0 ans returned is 1 automatically
    }
    
    void solve()
    {   
       // Calculate nCr.
       long long n,r;
       // cout<<"Enter value of n :"<<endl;
       cin>>n;
       //cout<<"Enter value of r :"<<endl;
       cin>>r;
       
       if(n<0 || r<0)
       {
           cout<<"No -ve values allowed"<<endl;
           return;
       }
       cout<<(fact(n)/(fact(r)*fact(n-r)))<<endl;
    }
    
    int main()
    {
        //auto t1 = std::chrono::high_resolution_clock::now();
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        
        int t=1;
        cin>>t;
    
        while(t--)
        {
            solve();
        }
        // auto t2 = std::chrono::high_resolution_clock::now();
        // auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        // cerr<<duration<<" micro sec";
        return 0;     
    }
    
