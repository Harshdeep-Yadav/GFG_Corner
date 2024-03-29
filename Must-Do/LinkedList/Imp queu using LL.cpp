

    // Function to push an element into the queue.
    void MyQueue::push(int x)
{
    QueueNode *ll = new QueueNode(x);
    ll->data = x;
    ll->next = NULL;
    if (front == NULL)
    {
        front = rear = ll;
    }
    else
    {
        rear->next = ll;
        rear = ll;
    }
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    // Your Code
    int x = -1;
    if (front == NULL)
    {
        return -1;
    }
    else
    {
        QueueNode *temp = front;
        front = front->next;
        x = temp->data;

        delete (temp);
    }
    return x;
}