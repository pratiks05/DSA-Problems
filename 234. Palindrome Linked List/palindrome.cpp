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


//Leet Code Solution-

/*
class Solution {
public:
    //reverse a LinkedList
    ListNode* reverseListUsingRecursion(ListNode* prev,ListNode* curr)
    {
        if(curr==NULL)
        {
            return prev;
        }
        ListNode* nextNode=curr->next;
        curr->next=prev;
        ListNode* recursionAns=reverseListUsingRecursion(curr,nextNode);
        return recursionAns;
    }
    //Middle of LinkedList
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next !=NULL)
        {
            fast=fast->next;
            if(fast->next !=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }

    bool compareList(ListNode* head1,ListNode* head2)
    {
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val!=head2->val)
            {
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        //divide into two halves
        ListNode* midNode=middleNode(head);
        ListNode* head2=midNode->next;
        midNode->next=NULL;
        //reverse the 2nd list
        ListNode* prev=NULL;
        ListNode* curr=head2;
        head2=reverseListUsingRecursion(prev,curr);

        //compare
        bool ans=compareList(head,head2);
        return ans;
    }
};

*/