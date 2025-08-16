//Approch 01- O(n) time and in 2 passes
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//Leet Code Solution:
/*
class Solution {
public:
    int LengthLL(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {
        int n=LengthLL(head);
        int mid=n/2+1;
        int currPos=1;
        ListNode* temp=head;
        while(currPos!=mid)
        {
            currPos++;
            temp=temp->next;
        }
        return temp;
    }
};
*/