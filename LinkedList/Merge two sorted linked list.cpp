class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        
        if(list2==NULL)
            return list1;
        
        if(list1->val > list2->val)
            swap(list1,list2);
        
        ListNode* ans=list1;
        while(list1 && list2)
        {
            ListNode* t=NULL;
            while(list1 && list1->val<=list2->val)
            {
                t=list1;
                list1=list1->next;
            }
            t->next=list2;
            swap(list1,list2);
        }
        return ans;
    }
};
