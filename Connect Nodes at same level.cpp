class Solution{
    public:
    void connect(Node *root)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                Node*temp=q.front();
                q.pop();
                if(sz==0){
                    temp->nextRight=NULL;
                }else{
                    temp->nextRight=q.front();
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right){
                    q.push(temp->right);
                }
            }
         }
    }    
};