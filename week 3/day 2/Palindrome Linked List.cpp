class Solution {
public:
    bool isPalindrome(ListNode* head) {

        stack<int> s;
        ListNode* temp=head;
        
        ListNode* temp1 =head;

        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }


        while(temp1!=NULL)
        {
            if(temp1->val != s.top())
            {
                return false;
            }

            temp1=temp1->next;
            s.pop(); 
        }

            return true;
    }
};
