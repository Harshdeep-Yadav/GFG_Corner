//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    Node*a=head1;
    Node*b=head2;
    while(1){
        if(a==b){
            return a->data;
        }
        a=a->next;
        b=b->next;
        if(a==NULL&&b==NULL){
            return -1;
        }
        if(a==NULL){
            a=head2;
        }
        if(b==NULL){
            b=head1;
        }
    }
    return -1;
}