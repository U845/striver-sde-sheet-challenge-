class Solution {
public:
    ListNode* reverse(ListNode* nod)
    {
        ListNode* pre=NULL;
        ListNode* nex=NULL;
        while(nod)
        {
            nex=nod->next;
            nod->next=pre;
            pre=nod;
            nod=nex;
        }
        return pre;
            
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* t=head;
        while(slow)
        {
            if(t->val!=slow->val)
                return false;
            slow=slow->next;
            t=t->next;
        }
        return true;
    }
};
