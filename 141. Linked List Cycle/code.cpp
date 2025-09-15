/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */



//Leet Code Solution-
//Time Complexity: O(n)
//Approach- using map


/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool>table;
        ListNode* temp=head;//for traversal
        while(temp!=NULL)
        {
            if(table[temp]==false)
            {
                table[temp]=true;
            }
            else{
                return true; //loop present
            }
            temp=temp->next;
        }
        return false;
    }
};
*/


