/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow)
            {
                break;
            }
        }

        slow=head; //loop present h jab ye pata chal jaye toh break karke slow ko head pe bhej de

        if(fast==NULL)
        {
            return NULL; //empty cycle
        }
        while(fast!=slow) //loop me h toh kabhi na kabhi equal hoga hi
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};
*/