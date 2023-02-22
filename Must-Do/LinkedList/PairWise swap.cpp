class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
         if(head==NULL||head->next==NULL){
            return head;
        }
        
        Node*f=head;
        Node*s=head->next;
       
        Node*ans=pairWiseSwap(head->next->next);
        
        s->next=f;
        f->next=ans;
        
        return s;
    }
    
};