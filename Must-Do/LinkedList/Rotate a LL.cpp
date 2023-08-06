class Solution
{
public:
    Node *rotate(Node *head, int k)
    {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = head;
        while (k--)
        {
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;

        return head;

        // 2 nd

        if (!head || !head->next || k == 0)
        {
            return head;
        }
        Node *curr = head;
        int len = 1;
        while (curr->next)
        {
            len++;             // 5
            curr = curr->next; // curr at last index now
        }

        curr->next = head; // circular LL ban gai abb
        // agar k=10 hai to same return kr denge warna % le lenge
        k = k % len;
        k = len - k;
        while (k--)
        {
            curr = curr->next; // jha se cut karna h wwha pahuch gye abb
        }
        // now cut

        head = curr->next;
        curr->next = NULL;

        return head;
    }
};