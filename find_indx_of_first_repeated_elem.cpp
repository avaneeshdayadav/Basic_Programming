#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Problem statement : 
    Given an array of size N. The task is to find the first repeating element in the array of integers,i.e 
    an element that occurs more than once and whose index of first oocurence is smallest.
    
    CONSTRAINTS : 
    1 <= N <= 10^6
    1 <= Ai <= 10^6
    
    
*/
int main() {
	// your code goes here
	
	long long stored_index_of_every_elem[1000000],N,min_indx=INT_MAX;
	cin>>N;
	long long arr[N];
	
	// Initialization of a array of size 10^6 with every element -1
	memset(stored_index_of_every_elem, -1, sizeof(stored_index_of_every_elem));

	for(long long i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	
	for(long long i=0;i<N;i++)
	{
        if(stored_index_of_every_elem[arr[i]] == -1)
        {
            stored_index_of_every_elem[arr[i]] = i;
        }
	    else if(stored_index_of_every_elem[arr[i]] < min_indx)
	        min_indx = stored_index_of_every_elem[arr[i]] ;
	}
	
	cout<<"Min repeated index is "<<min_indx<<endl;
	
	
	
	
	return 0;
}
