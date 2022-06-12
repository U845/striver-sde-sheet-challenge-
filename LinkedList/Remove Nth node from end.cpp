class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first=new ListNode();
        first->next=head;
        ListNode* slow=first;
        ListNode* fast=first;
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return first->next;
    }
};
