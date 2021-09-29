
// Convert binary string to secs and add all secs and represent the time in human readable format i.e 00:00:00

/*Input examples
Input
    3
    00011100
    01001110
    01000011
Output
    00:02:53
    

Input
    2
    00000000
    11111111
Output
    Invalid Input
*/

#include "bits/stdc++.h"
using namespace std;

void computeLapTime(vector<string> lapTimes)
{
    vector<int> nums;
    
    // If inputs are less than 1 or greater than 10 then Invalid input
    if(lapTimes.size()>10 || lapTimes.size()<1)
    {
        cout<<"Invalid input"<<endl;
        return;
    }
    
    for(int j=0;j<lapTimes.size();j++)
    {
        int value = 0;
        int indexCounter = 0;
        for(int i=lapTimes[j].length()-1;i>=0;i--)
        {
        
            if(lapTimes[j][i]=='1'){
                value += pow(2, indexCounter);
            }
            
            indexCounter++;
            
        }
        
        if(value==0)
        {
            cout<<"Invalid input"<<endl;
            return;
        }
        else
            nums.push_back(value);
    }
    
    long long int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }


    int secs,hrs,mins;
    secs=sum;
    mins = secs/60;
    hrs = mins/60;
    
    printf ("%02d:%02d:%02d\n", hrs, mins%60, secs%60);
}

int main()
{
    vector<string> v;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
        
    computeLapTime(v);
    return 0;     
}
