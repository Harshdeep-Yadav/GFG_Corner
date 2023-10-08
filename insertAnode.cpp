class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {

        if (data < head->data)
        {
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
            return head;
        }

        Node *tmp = head;
        Node *prev = NULL;

        while (tmp != NULL && tmp->data <= data)
        {
            prev = tmp;
            tmp = tmp->next;
        }
        //   connecting
        Node *newNode = new Node(data);
        prev->next = newNode;
        newNode->next = tmp;
        return head;
    }
};