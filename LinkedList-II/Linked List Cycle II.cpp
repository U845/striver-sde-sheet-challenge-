class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* slow=head, *fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                fast=head;
                while(fast!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
            
        }
        return NULL;
    }
};
