class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    void solve(Node *root ,vector<int>&in){
        if(root==NULL){
            return;
        }
        
        solve(root->left,in);
        in.push_back(root->data);
        solve(root->right,in);
    }
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    vector<int>in;
    solve(root,in);
    
    Node *head=NULL;
    Node *tail=NULL;
    
    for(auto it : in){
        Node* newnode=newNode(it); // newNode
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }
            else{
                newnode->left=tail;
                tail->right=newnode;
                tail=newnode;
            }
    }
       head->left=tail;
        tail->right=head;
        
        return head;
    }
};