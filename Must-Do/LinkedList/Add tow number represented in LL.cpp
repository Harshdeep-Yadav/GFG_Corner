class Solution
{

private:
    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *next;
        while (head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

public:
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        first = reverse(first);
        second = reverse(second);

        Node *temp = new Node(0);
        Node *ans = temp;
        int carry = 0;
        while (first || second || carry)
        {
            int sum = carry;
            if (first)
            {
                sum += first->data;
                first = first->next;
            }
            if (second)
            {
                sum += second->data;
                second = second->next;
            }

            Node *newNode = new Node(sum % 10);
            temp->next = newNode;
            temp = temp->next;
            carry = sum / 10;
        }

        ans = reverse(ans->next);
        return ans;
    }

    // Node* reverse(Node* head)
    // {
    //     Node* prev = NULL;
    //     Node* next;

    //     while(head)
    //     {
    //         next = head->next;
    //         head->next = prev;
    //         prev = head;
    //         head = next;
    //     }
    //     return prev;
    // }

    // void insertAttail(struct Node* &head, struct Node* &tail,int val){
    //     Node*tmp=new Node(val);
    //     if(head==NULL){
    //       head=tmp;
    //       tail=tmp;
    //       return;
    //     }
    //     else{
    //         tail->next=tmp;
    //         tail=tail->next;
    //     }
    // }
    //   struct Node* add(struct Node* first, struct Node* second)
    // {
    //     int carry=0;
    //     Node* ansHead=NULL;
    //     Node* ansTail=NULL;
    //     while(first!=NULL && second!=NULL){
    //         int sum =carry+first->data+second->data;
    //         int digit=sum%10;
    //         // create node ans insert LL
    //         insertAttail(ansHead,ansTail,digit);
    //         carry=sum/10;
    //         first=first->next;
    //         second=second->next;
    //     }

    //     while(first!=NULL){
    //         int sum =carry+first->data;
    //         int digit=sum%10;
    //         // create node ans insert LL
    //         insertAttail(ansHead,ansTail,digit);
    //         carry=sum/10;
    //         first=first->next;
    //     }
    //     while(second!=NULL){
    //         int sum =carry+second->data;
    //         int digit=sum%10;
    //         // create node ans insert LL
    //         insertAttail(ansHead,ansTail,digit);
    //         carry=sum/10;
    //         second=second->next;
    //     }
    //     while(carry!=0){
    //         int sum=0;
    //         int digit=sum%10;
    //           // create node ans insert LL
    //         insertAttail(ansHead,ansTail,digit);
    //         carry=sum/10;
    //     }
    //     return ansHead;
    // }
    // public:
    // struct Node* addTwoLists(struct Node* first, struct Node* second)
    // {
    //     // 1st reverse the input LL
    //     first=reverse(first);
    //     second=reverse(second);

    //     // 2nd add

    //     Node*ans=add(first,second);

    //     // 3rd reverse ans LL

    //     ans=reverse(ans);
    //     return ans;
    // }
};