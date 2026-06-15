class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // recursive  solution 
        if(head==NULL || head->next==NULL) return head;
        ListNode* ans= reverseList(head->next);
        
        head->next->next= head;
        head->next= NULL;

        return ans;
       

        
        
    }
};
