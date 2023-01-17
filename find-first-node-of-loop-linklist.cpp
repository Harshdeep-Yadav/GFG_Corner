class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        if(!head) return -1;
        
        Node*slow=head;
        Node*fast=head;
     while(fast!=NULL && fast->next!=NULL){  
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast){
                while(head!=fast)
                {
                    fast=fast->next;
                    head=head->next;
                }
                return head->data;
            }
        }
        return -1;
    }
};