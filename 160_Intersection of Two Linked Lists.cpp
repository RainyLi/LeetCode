/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* runnerA=headA;
        ListNode* runnerB=headB;
        bool flagA=false;
        bool flagB=false;
        while(runnerA!=runnerB)
        {
            if(runnerA==NULL&&!flagA)
            {
                runnerA=headB;
                flagA=true;
            }
            else
            {
                runnerA=runnerA->next;
            }
            if(runnerB==NULL&&!flagB)
            {
                runnerB=headA;
                flagB=true;
            }
            else
            {
                runnerB=runnerB->next;
            }
        }
        if(runnerA==runnerB)
            return runnerA;
        else
            return NULL;
    }
};