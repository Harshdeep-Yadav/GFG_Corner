#include <vector>

class Solution
{
public:
    //      1st solution using extra space

    // bool palin(vector<int>arr){
    //     int i=0;
    //     int n =arr.size();
    //     int j=n-1;
    //     while(i<=j){
    //         if(arr[i]!=arr[j]){
    //             return 0;
    //         }else{
    //             i++;
    //             j--;
    //         }
    //     }
    //     return 1;
    // }
    // bool isPalindrome(Node *head)
    // {
    //     Node*curr=head;
    //     vector<int>arr;
    //     while(curr!=NULL){
    //         arr.push_back(curr->data);
    //         curr=curr->next;
    //     }
    //     return palin(arr);
    // }

    //  second solution without extra space

    Node *mid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {

            fast = fast->next;
            if (fast != NULL)
                fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    Node *reverseLL(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool check(Node *head1, Node *head2)
    {
        while (head1 != NULL && head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
    bool isPalindrome(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        Node *h = head;
        Node *m = mid(h);
        Node *h2 = reverseLL(m);
        return check(h, h2);
    }
};
