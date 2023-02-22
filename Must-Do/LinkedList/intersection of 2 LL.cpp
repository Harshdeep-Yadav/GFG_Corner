lass Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>mp;
        Node*ans=new Node(0);
        Node*res=ans;
        while(head2){
            mp[head2->data]++;
            head2=head2->next;
        }
        while(head1){
            if(mp.find(head1->data)!=mp.end()){
            Node*tmp=new Node(head1->data);
            ans->next=tmp;
            ans=ans->next;
            }
            head1=head1->next;
        }
        return res->next;
    }
};