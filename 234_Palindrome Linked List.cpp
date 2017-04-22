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
    bool isPalindrome(ListNode* head) {
        if(!head){
            return true;
        }
        int size=0;
        ListNode* p=head;
        while(p){
            p=p->next;
            size++;
        }
        
        stack<int> mystack;
        
        p=head;
        while(mystack.size()*2<size){
            mystack.push(p->val);
            p=p->next;
        }
        
        if(size%2==1)
            mystack.pop();
            
        while(p){
            if(p->val!=mystack.top()){
                return false;
            }
            p=p->next;
            mystack.pop();
        }
        
        return true;
    }
};