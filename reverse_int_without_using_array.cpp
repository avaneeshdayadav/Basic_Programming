    
    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    
    void solve()
    {   
       // reverse a number without using array
       long long num,ans=0;
       cin>>num;
       int rem;
       
       for(int i=0;num!=0;i++)
       {
           rem=num%10;
           ans=ans*10+rem;
           num/=10;
       }
       cout<<ans<<endl;
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
            solve();
        }
        auto t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        cerr<<duration<<" micro sec";
        return 0;     
    }
    
