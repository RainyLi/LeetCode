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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *newnode=new ListNode(0);
        newnode->next=head;
        
        ListNode* prenode=newnode;
        ListNode* curnode=prenode->next;
        
        while(curnode){
            if(curnode->val!=val){
                curnode=curnode->next;
                prenode=prenode->next;
            }
            else{
                prenode->next=curnode->next;
                curnode=curnode->next;
            }
        }
        
        return newnode->next;
    }
};