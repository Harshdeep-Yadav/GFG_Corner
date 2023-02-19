class Solution {
  public:
    int a,b; // stored value jo inorder ko voilate kar rhi hai
    vector<int>res;
 void inorder( struct Node*root){
      if(root==NULL) 
        return;
      inorder(root->left);
      res.push_back(root->data);
      inorder(root->right);
      return;
  }
  
  void swap(struct Node*root){
      if(root==NULL) 
        return;
      if(root->data==a){
          root->data=b;
      }
      else if(root->data==b){
          root->data=a;
      }
      swap(root->left);
      swap(root->right);
  }
    struct Node *correctBST(struct Node *root) {
        inorder(root);
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>res[i+1]){    
                a=res[i];
                break;
            }
        }
        for(int i=res.size()-1;i>0;i--){
            if(res[i]<res[i-1]){
                b=res[i];
                break;
            }
        }
        swap(root);
        return root;
    }
};