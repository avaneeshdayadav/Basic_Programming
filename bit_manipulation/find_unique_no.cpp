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
    
    
    // Soln to Problem Statement 1.
        int arr1[7] = {2,4,6,3,4,6,2},size1=0,temp1=0;
        
        size1 = sizeof(arr1)/sizeof(int);
        
        for(int i=0;i<size1;i++)
        {
            temp1 = (temp1 xor arr1[i]);
        }
        
        cout<<"Unique number is "<<temp1<<endl;
        
        
    // Soln to Problem Statement 2.
    
        /*
            step 1 : total xor of whole array. All duplicates eliminated, final ans is xor of two req Unique no's.
            step 2 : Find position of rightmost 1st set bit in total xor and xor all those no's of array which has this positin bit as 1 in them.
            step 3 : All duplicates with this pos as 1 eliminated and only one Unique no which has this pos bit 1 is output of step 2.
            step 4 : xor again total xor with this step 2 output to get another Unique no.
        */
    

    return 0;
}
