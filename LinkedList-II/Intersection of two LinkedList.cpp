class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
        {
            return NULL;
        }
        ListNode* first=headA, * second=headB;
        while(first!=second)
        {
            first=first==NULL?headB:first->next;
            second=second==NULL?headA:second->next;
            if(first==second)
            {
                if(first==NULL)
                {
                    return NULL;
                }
                
            }
        }
        return first;
    }
};
