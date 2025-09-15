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

#include<iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
};



//Leet Code Solution- Time Complexity-O(n)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    
};


//using recursion-
class Solution {
public:
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

    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        return reverseListUsingRecursion(prev,curr);
    }
    
};