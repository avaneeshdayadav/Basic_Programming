
// In C++, we can use large numbers by using the boost library. This C++ boost library is widely used library. This is used for different sections. It has large domain of applications. For example, using boost, we can use large number like 264 in C++.

// We can use big integer datatype. We can use different datatypes like int128_t, int256_t, int1024_t etc. By using this we can get precision up to 1024 easily.

// Another kind of datatype is that Arbitrary Precision Datatype. So we can use any precision using cpp_int datatype. It automatically assigns precision at runtime.




    #include<iostream>
    #include <boost/multiprecision/cpp_int.hpp>

    using namespace boost::multiprecision;
    using namespace std;
    
    
    // This func can calculate factorial value approximatly upto 10^4.
    cpp_int large_fact(int num)
    {
       cpp_int fact = 1;
       for (int i=num; i>1; --i)
          fact *= i;
       return fact;
    }
    
    int main()
    {
       cout << "Factorial of 10000: " << large_fact(10000) << endl;
    }
