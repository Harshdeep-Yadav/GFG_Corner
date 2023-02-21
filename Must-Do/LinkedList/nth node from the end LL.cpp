int getNthFromLast(Node *head, int n)
{
    Node*cur=head;
    int l=0;
    while(cur){
        l++;
        cur=cur->next;
    }
    if(n>l) return -1;
    int steps=l-n;
    if(steps<0) return -1;
    cur=head;
    while(steps>0){
        cur=cur->next;
        steps--;
    }
    return cur->data;
}