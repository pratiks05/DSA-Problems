//Leet code Solution-
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        while(n%3==0)
        {
            n=n/3;
        }
        // if(n==1)
        //     return true;
        // else
        //     return false;
        return n==1;
    }
};

//Complexity-O(log n)