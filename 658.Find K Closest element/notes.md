## Methods to solve-
1.Two Pointer Approch

2.Two Pointer with Binary Search

Leet Code Solution-

```bash
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0,h=arr.size()-1;
        while((h-l)>=k)
        {
            if(x-arr[l]>arr[h]-x)
            {
                l++;
            }
            else{
                h--;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+h+1);
        
    };
```

* Two pointers taken low(l)->starting from zero and high(h)->starting from last element

* We are comparing differences (from x) of all the array elements based on the if-else conditions.

* we are trying to shrink the window/array from size n to size k. So there will be n-k comparisons and hence time complexity will be O(n-k).
* And at last we are simply printing the vector from l to h given in return!

We can also use this Code for printing the vector from l to h->

```bash
vector<int>ans;
 for(int i=l; i<=h; i++)
 {
     ans.push_back(arr[i]);
 }
 return ans;
```

