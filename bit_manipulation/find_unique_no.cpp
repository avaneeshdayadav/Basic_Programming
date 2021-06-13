#include <iostream>
using namespace std;

int main() {
    
    /*
    
    Problem Statement 1 : Given a array containing only one unique no and other all no's r repeated even no. of times.
                        Find the unique no.
                        
    Problem Statement 2 : Given a array containing only two unique no's and other all no's r repeated even no. of times.
                        Find the unique no.
    
    Concept : Same no's when xored gives zero.
        
    */
    
    int arr1[7] = {2,4,6,3,4,6,2},size1=0,temp1=0;
    
    size1 = sizeof(arr1)/sizeof(int);
    
    for(int i=0;i<size1;i++)
    {
        temp1 = (temp1 xor arr1[i]);
    }
    
    cout<<"Unique number is "<<temp1<<endl;

    return 0;
}
