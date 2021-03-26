    
    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
   
    #define PB push_back 
    
    void solve()
    {   
       // Decimal to octal
       long long N,quot;
       cin>>N;
       vector<int> oct;
       
       while(N!=0)
       {
           oct.PB(N%8);
           N/=8;
       }
       
       reverse(oct.begin(),oct.end());
       
       for(int i=0;i<oct.size();i++)
       {
           cout<<oct[i];
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
            solve();
        }
        auto t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        cerr<<duration<<" micro sec";
        return 0;     
    }
    
