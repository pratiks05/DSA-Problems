//Leet Code Solution:
//Time complexity: O(log n) (base 4)
//Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        {
            return false;
        }
        while(n%4==0)
        {
            n=n/4;
        }
        return n==1;
    }
};