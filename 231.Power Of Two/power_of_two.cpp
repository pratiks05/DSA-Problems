//If any number is power of two, then it has only one bit set in its binary representation.
//If you do bitwise AND of the number and number-1, it will be zero if the number is power of two.

//Leet Code solution
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && (n& n-1)==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};


//Time Complexity of the solution is O(1) since it only involves a few bitwise operations.