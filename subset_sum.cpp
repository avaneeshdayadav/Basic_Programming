/*

  DYANAMIC PROGRAMMING
  
  1. Find minimum number of elements required from a given set of elements to make sum = k.
  2. Print the elements included in making the sum = k using Dyanamic approach.
  3. Finally also print the Dyanamic table.
  
*/


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
        int64 N,K,temp,sum=0;
        cin>>N>>K;
        
        vector<vector<int64>> DP( N+1 , vector<int64> (K+1,0));
        vector<int64>arr;
        vector<int64>res;
        
        arr.push_back(-1);
        
        for(int64 i=1;i<=N;i++)
        {
            cin>>temp;
            sum+=temp;
            arr.push_back(temp);
        }
        
        if(sum<K)
        {
            cout<<"No such sum by given elements possible"<<endl;
            return;
        }
        
        sort(arr.begin(),arr.end());
    
        
        for(int64 i=0;i<=N;i++)
        {
            DP[i][0]=0;
        }
        
        for(int64 j=1;j<=K;j++)
        {
            DP[0][j]=INF;
        }
        
        for(int64 i=1;i<=N;i++)
        {
            for(int64 j=1;j<=K;j++)
            {
                if(j<arr[i])
                    DP[i][j] = 0 + DP[i-1][j];
                else
                {
                    DP[i][j] = min( (1 + DP[i-1][j-arr[i]]) , 0 + (DP[i-1][j]) );
                    if(DP[i][j]>=INF)
                    {
                        DP[i][j]=INF;
                    }
                }
            }
        }
        
        
        // Print DP
        cout<<"Dynamic Table is :"<<endl;
        for(int64 i=0;i<=N;i++)
        {
            for(int64 j=0;j<=K;j++)
            {
                if(j==0)
                    cout<<DP[i][j]<<" ";
                else
                    cout<<setfill(' ') <<setw(19)<<DP[i][j]<<" ";
            }
                
            cout<<endl;
        }
        cout<<endl;
        
        // // Print arr
        // for(int64 i=0;i<=N;i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;
        
        
        int64 row,col;
        row = N;
        col = K;
        
        if(DP[row][col] == INF)
        {
            cout<<"No such sum by given elements possible"<<endl;
            return;
        }
        
        while(row!=0 && col!=0)
        {
            // cout<<"value of row and col is "<<row<<" "<<col<<endl;
            while(DP[row][col] == DP[row-1][col])
            {
                row = row-1;
            }
            
            res.push_back(arr[row]);
            col = col-arr[row];
            row = row-1;
        }
        
        cout<<"min no. of elements required to make sum of "<<K<<" are "<<DP[N][K]<<endl;
        cout<<"Those "<<DP[N][K]<<" elements are as follows :"<<endl;
        for(int64 i=0;i<res.size();i++)
            cout<<res[i]<<" ";
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
        // auto t2 = std::chrono::high_resolution_clock::now();
        // auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        // cerr<<duration<<" micro sec";
        return 0;     
    }
    
