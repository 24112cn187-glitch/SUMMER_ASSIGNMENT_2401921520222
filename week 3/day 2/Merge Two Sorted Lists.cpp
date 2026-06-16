class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode* c= new ListNode(INT_MIN);
        ListNode* head=c;
        
        ListNode* tempa=list1;
        ListNode* tempb=list2;

        while(tempa != NULL && tempb != NULL)
        {
            if(tempa->val <= tempb->val)
            {
                c->next=tempa;
                c=c->next;
                tempa=tempa->next;  
            }

            else
            {
                c->next=tempb; 
                c=c->next;
                tempb=tempb->next;
                
            }

        }

        if(tempa == NULL)
        {
            c->next =tempb;
        }


        else
        {
            c->next= tempa;
        }

    return head->next;

        
    }
};
