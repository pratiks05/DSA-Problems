# Leet code #09


class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        reverse, original = 0, x
        
        while x > 0:
            ld = x % 10
            reverse = reverse * 10 + ld
            x = x // 10
        
        return reverse == original

# Test cases
solution = Solution()
print(solution.isPalindrome(121))  
print(solution.isPalindrome(-121)) 
print(solution.isPalindrome(10)) 