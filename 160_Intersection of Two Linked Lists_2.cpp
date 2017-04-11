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
        int la=0;
        int lb=0;
        ListNode* pa=headA;
        ListNode* pb=headB;
        while(pa!=NULL){
            pa=pa->next;
            la++;
        }
        while(pb!=NULL){
            pb=pb->next;
            lb++;
        }
        
        pa=headA;
        pb=headB;
        
        if(la>lb){
            while(la>lb){
                pa=pa->next;
                la--;
            }
        }
        else if(lb>la){
            while(lb>la){
                pb=pb->next;
                lb--;
            }
        }
        
        while(pb!=NULL and pa!=NULL and pb!=pa){
            pb=pb->next;
            pa=pa->next;
        }
        if(pb==NULL or pa==NULL)
            return NULL;
        else
            return pb;
    }
};
