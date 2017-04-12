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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=head;
        if(pre==NULL)
            return pre;
        ListNode* cur=head->next;
        
        
        
        while(cur!=NULL){
            //cout<<cur->val<<" "<<pre->val<<endl;
            ListNode* tempcur=cur->next;
            ListNode* temppre=cur;
            cur->next=pre;
            cur=tempcur;
            pre=temppre;
        }
        //cout<<"return: "<<pre->val<<endl;
        head->next=NULL;
        return pre;
    }
};