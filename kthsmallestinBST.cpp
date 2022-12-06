class Solution {
  public:
    
  int cnt=0;
  int ans=0;
  int count(Node*root,int k)
  {
      if(root==NULL) return 0;
      count(root->left,k);
      cnt++;
      if(cnt==k)
      {
          ans=root->data;
      }
      count(root->right,k);
      
      return ans!=0?ans:-1;
  }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
      if(root==NULL) return -1;
      return count(root,K);
    }
};