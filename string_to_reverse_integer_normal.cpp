    
    #include "bits/stdc++.h"
    using namespace std;

    void solve()
    {   
       // string to reverse integer normal
       long long ans=0;
       string str;
       cin>>str;
       
       for(int i=0;i<str.length();i++)
       {
          ans = ans + (str[i]-48)*pow(10,i);
       }
       cout<<ans<<endl;
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
    
