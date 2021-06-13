#include <iostream>
using namespace std;

int main() {
    
    /*
    
    Problem Statement : Given a array containing only one unique no and other all no's r repeated even no. of times.
                        Find the unique no.
    
    Concept : Same no's when xored gives zero.
        
    */
    
    int arr[7] = {2,4,6,3,4,6,2},size=0,temp=0;
    
    size = sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++)
    {
        temp = (temp xor arr[i]);
    }
    
    cout<<"Unique number is "<<temp<<endl;

    return 0;
}
