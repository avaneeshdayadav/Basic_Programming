
#include <iostream>
using namespace std;

int main() {
    
    int n,i;
    cin>>n;
    cin>>i;
    
    
    /*
        Here if n = 10 then,
        binary form : 1010
        index       : 3210
    */
    
	// get ith index bit
	
	if(n & (1<<i))
	    cout<<"ith bit is 1"<<endl;
    else
	    cout<<"ith bit is 0"<<endl;
	    
	    
	    
	// set ith index bit
	
    cout<<"After setting ith bit, no is "<<(n | (1<<i))<<endl;
    
    
    
    // unset/clear ith index bit
	
    cout<<"After clearing ith bit, no is "<<(n & ~(1<<i))<<endl;

    
	return 0;
}
