class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        if(root==NULL) return 0;
         int x=root->data;
         queue<Node*>q;
         q.push(root);
         
         while(!q.empty()){
             int n=q.size();
             int sum=0;
             while(n--){
                 Node*tmp=q.front();
                 q.pop();
                 sum+=tmp->data;
                 if(tmp->left!=NULL){
                     q.push(tmp->left);
                 }
                 if(tmp->right!=NULL){
                     q.push(tmp->right);
                 }
             }
             x=max(x,sum);
         }
         return x;
    }
};