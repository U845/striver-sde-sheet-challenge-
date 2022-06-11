class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL, *Next_p;
        while(head!=NULL)
        {
            Next_p=head->next;
            head->next=prev;
            prev=head;
            head=Next_p;
        }
        return prev;
    }
};
