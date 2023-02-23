void MyStack ::push(int x) 

{

    // Your Code

    StackNode *node = new StackNode(x);

    node->next=top;

    top=node;

}

 

int MyStack ::pop() 

{

    // Your Code

    if(top==NULL)

        return -1;

        

    int x=top->data;

    

    StackNode *temp=top;

    top=top->next;

    delete temp;

    

    return x;

}