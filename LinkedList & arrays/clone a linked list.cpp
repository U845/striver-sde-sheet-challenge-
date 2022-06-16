class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* it=head, *lead=head;
        while(it)
        {
            lead=it->next;
            Node* deep=new Node(it->val);
            it->next=deep;
            deep->next=lead;
            it=lead;
        }
        
        it=head;
        while(it)
        {
            if(it->random)
            {
                it->next->random=it->random->next;
                
            }
            it=it->next->next;
        }
        
        it=head;
        Node* dummy=new Node(0);
        Node* t=dummy;
        while(it)
        {
            lead=it->next->next;
            t->next=it->next;
            it->next=lead;
            t=t->next;
            it=lead;
            
        }
        return dummy->next;
    }
};
