    
    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    
    void solve()
    {   
       // Sting to integer
       string str;
       cin>>str;
       long long num=0;
       
       for(int i=0;i<str.length();i++)
       {
           num =+ (num*10) + str[i]-48;
       }
       
       cout<<num<<endl;
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
    
