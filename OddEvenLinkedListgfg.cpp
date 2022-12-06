class Solution{
public:
    Node* divide(int N, Node *head){
 if(!head) return head;
        Node* evenHead = new Node(-1), *oddHead = new Node(-1), *even = evenHead, *odd = oddHead;
        while(head)
        {
            if(head->data % 2 == 0)
            {
                even->next = head;
                even = even->next;
            }
            else
            {
                odd->next = head;
                odd = odd->next;
            }
            head = head->next;
        }
        odd->next = NULL;
        even->next = oddHead->next;
        return evenHead->next;  
        }
};