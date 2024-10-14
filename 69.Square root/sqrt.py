#Leet code 69.

class Solution:
    def mySqrt(self, x: int) -> int:
        if(x==0 or x==1):
            return x
        s=1
        e=x
        result=0
        while(s<=e):
            mid=(s+e)//2
            if mid*mid==x:
                return mid
            if mid*mid<x:
                s=mid+1
                result=mid
            else:
                e=mid-1
        return result
        