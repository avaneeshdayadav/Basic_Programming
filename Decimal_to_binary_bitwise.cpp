    
    #include "bits/stdc++.h"
    //#include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    #define PB push_back 
    
    void solve()
    {   
       // Decimal to binary using bitwise operators
       long long N;
       cin>>N;
       vector<bool> v;
       
       while(N!=0)
       {
           if(N & 1)
           {
               v.PB(1);
           }
           else
           {
               v.PB(0);
           }
           N>>=1;
       }
       
       reverse(v.begin(),v.end());
       
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i];
       }
       cout<<endl;
    }
    
    int main()
    {
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
    
