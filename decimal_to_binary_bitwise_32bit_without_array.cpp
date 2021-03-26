    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    #define PB push_back 
    
    void solve()
    {   
       // Decimal to binary 32 bit without array.
       int N;
       cin>>N;
       
       if(N<0)
       {
           cout<<"No negative integers allowded"<<endl;
           return;
       }
       
      unsigned int i=pow(2,31); //This i should be able to store values > range of N
       
      while(i!=0)
      {
        if(i&N)
            cout<<"1";
        else
            cout<<"0";
          i >>= 1;
      }
      
      cout<<endl;
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
    
