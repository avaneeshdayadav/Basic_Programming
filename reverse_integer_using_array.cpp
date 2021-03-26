    
    #include "bits/stdc++.h"
    #include <chrono>
    using namespace std;
    
    void solve()
    {   
       // reverse a number using string conversion method and reverse function
       string str;
       long long num;
       cin>>str;
       
       reverse(str.begin(),str.end());
       num=stoi(str);
       cout<<num<<endl;
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
        
        return 0;     
    }
    
