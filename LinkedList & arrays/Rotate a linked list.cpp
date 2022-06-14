class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        ListNode* t=head;
        int len=1;
        while(t->next)
        {
            len++;
            t=t->next;
        }
        t->next=head;
        k=k%len;
        int e=len-k;
        while(e--)
        {
            t=t->next;
        }
        head=t->next;
        t->next=NULL;
        return head;
            
    }
};
