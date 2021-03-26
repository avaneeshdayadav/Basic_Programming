    
#include "bits/stdc++.h"
using namespace std;

bool check(int a, int b, int c)
{
    int greatest = max(a,max(b,c));
    
    if(greatest == a)
    {
        if(a*a == b*b + c*c)
            return true;
        else
            return false;
    }
    else if(greatest == b)
    {
        if(b*b == a*a + c*c)
            return true;
        else
            return false;
    }
    else if(greatest == c)
    {
        if(c*c == b*b + a*a)
            return true;
        else
            return false;
    }
}

int main() 
{
    // Pythagorian triplet
    int a,b,c;
    
    cin>>a>>b>>c;
    
    if(check(a,b,c))
        cout<<"Yes it's Pythagorian triplet"<<endl;
    else
        cout<<"Not a Pythagorian triplet"<<endl;
}

