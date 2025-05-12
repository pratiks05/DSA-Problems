//Approch 1(Observation)-
//Complexity- O(n)

#include<iostream>
using namespace std;

class Solution {
    public:
        long long coloredCells(int n) {
            int t=1;
            long long cells=1;
            while(t<=n)
            {
                cells+=(4*(t-1));
                t++;
            }
            return cells;
        }
    };


    



//Approch 2 (Using maths)-
//Using Formula- 1+2*(n-1)*n
//Complexity- O(1)

#include<iostream>
using namespace std;

class Solution {
    public:
    long long coloredCells(int n) {
        return 1+(2*(long long)(n-1)*n);
        }
    };
