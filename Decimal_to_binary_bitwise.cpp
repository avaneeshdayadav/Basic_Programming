    
    #include "bits/stdc++.h"
    //#include <chrono>
    using namespace std;
    #define INF 1000000000000000003
    
    #define max(a, b) (a < b ? b : a) 
    #define min(a, b) ((a > b) ? b : a) 
    #define MEM(a, b) memset(a, (b), sizeof(a))
    #define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
    #define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
    #define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
    
    #define F first 
    #define S second 
    #define PB push_back 
    #define POB pop_back 
    #define MP make_pair 
    typedef pair<int, int> PII;
    typedef vector<int> VI;
    typedef vector<string> VS;
    typedef vector<PII> VII;
    typedef vector<VI> VVI;
    typedef map<int,int> MPII;
    typedef set<int> SETI;
    typedef multiset<int> MSETI;
    typedef long int int32;
    typedef unsigned long int uint32;
    typedef long long int int64;
    typedef unsigned long long int uint64;
    
    const double pi=acos(-1.0);
    
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
    
