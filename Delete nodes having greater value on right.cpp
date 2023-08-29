Delete nodes having greater value on right

    Delete nodes having greater value on right class Solution
{
public:
    Node *compute(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        Node *curr = head;
        Node *tmp = curr;
        while (curr->next != NULL)
        {
            if (curr->next->data > curr->data)
            {
                tmp = curr;
                curr->data = curr->next->data;
                curr->next = curr->next->next;
                curr = head;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};