//Approch-01 Iteratively

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Leet Code solution-
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int price:prices)
        {
            if(price<minPrice)
            {
                minPrice=price;
            }
            else
            {
                int profit=price-minPrice;
                if(profit>maxProfit)
                {
                    maxProfit=profit;
                }
            }
        }
        return maxProfit;
    }
};