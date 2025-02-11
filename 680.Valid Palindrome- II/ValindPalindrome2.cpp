//Approch-
// Two Pointer Approch

//1.Leet Code Solution-

/*
class Solution {
    public:
        bool checkPalindrome(string s,int i,int j)
        {
            while(i<=j)
            {
                if(s[i]!=s[j])
                {
                    return false;
                }
                else{
                    i++;
                    j--;
                }
            }
            return true;
        }
        bool validPalindrome(string s) {
            int i=0;
            int j=s.length()-1;
            while(i<=j)
            {
               if(s[i]==s[j])
               {
                i++;
                j--;
               }
               else
               {
                //s[i]!=s[j] equal nhi hai
                //matlab atmost 1 removal allowed hai
                //check palindrome for remaining stringa after 1 removal
    
                //suppose ith element removed-
                bool ans1=checkPalindrome(s,i+1,j);
                //suppose jth element removed-
                bool ans2=checkPalindrome(s,i,j-1);
                return ans1||ans2;
               }
            }
            //agar yaha tak aa gaye ho matlab valid palindrome
            //iska matlab zero removal
            return true;
        }
};

*/