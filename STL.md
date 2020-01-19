# STL functions

## Built in LCM, GCD functions
```cpp 
    #include<iostream>
    #include <boost/math/common_factor.hpp> // include this header file 
    using namespace std;
    int main()
    {
        cout << "LCM(10,20) = " << boost::math::lcm(10,20);
        return 0;
    }
``` 
 C++ 17 has an in-built function to perform LCM 
```cpp
    cout<<"LCM(10,20) = "<<lcm(10,20);  
```
