Node* merge(Node* first,Node* second)
{
    Node* t=new Node(0);
    Node* ans=t;
    while(first && second)
    {
        if(first->data<=second->data)
        {
            t->bottom=first;
            first=first->bottom;
            t=t->bottom;
        }
        else{
            t->bottom=second;
            second=second->bottom;
            t=t->bottom;
        }
    }
    if(first)
    {
        t->bottom=first;
    }
    else{
        t->bottom=second;
    }
    return ans->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL)
   {
       return root;
   }
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}
