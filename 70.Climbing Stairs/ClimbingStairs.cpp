//Headers
#include<iostream>
using namespace std;

//70. Leet Code Solution-
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int first = 1, second = 2;

        for (int i = 3; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }

        return second;
    }
};

//Concept- Recursion (Fibonacci series)
//But it will give TLE on 31st test case
int climbStairs(int n) {
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    int ans=climbStairs(n-1)+climbStairs(n-2);
    return ans;
}

